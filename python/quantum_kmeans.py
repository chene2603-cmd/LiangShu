import numpy as np

class QuantumEnhancedKMeans:
    def __init__(self, n_clusters, n_qubits, n_layers=2):
        self.k = n_clusters
        self.n_qubits = n_qubits
        self.n_layers = n_layers

        params_per_centroid = 2 * n_qubits * n_layers
        self.centroids = self.initialize_centroids(n_clusters, params_per_centroid)

    def initialize_centroids(self, k, dim):
        np.random.seed(42)
        return [np.random.uniform(0, 2*np.pi, dim) for _ in range(k)]

    def quantum_distance_batch(self, data_batch, centroids):
        n = len(data_batch)
        k = len(centroids)
        return np.random.rand(n, k)

    def fit_minibatch(self, batch, lr=0.01):
        dist = self.quantum_distance_batch(batch, self.centroids)
        labels = np.argmin(dist, axis=1)
        loss = np.mean(dist[np.arange(len(labels)), labels])
        return labels, loss

    def fit(self, data, batch_size=100, max_epochs=50, patience=5):
        best = float('inf')
        no_imp = 0
        for epoch in range(max_epochs):
            loss = 0.0
            cnt = 0
            for i in range(0, len(data), batch_size):
                b = data[i:i+batch_size]
                _, l = self.fit_minibatch(b)
                loss += l
                cnt += 1
            avg = loss / cnt
            print(f"Epoch {epoch+1}, Loss: {avg:.4f}")
            if avg < best:
                best = avg
                no_imp = 0
            else:
                no_imp +=1
                if no_imp >= patience:
                    print("Early stop")
                    break