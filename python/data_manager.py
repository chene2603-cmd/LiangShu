import numpy as np

class DataManager:
    def __init__(self, data, batch_size, n_qubits):
        self.data = data
        self.batch_size = batch_size
        self.n_qubits = n_qubits
        self.normalized_data = self.normalize_and_scale(data)

    def normalize_and_scale(self, data):
        data_min = np.min(data, axis=0)
        data_max = np.max(data, axis=0)
        normalized = (data - data_min) / (data_max - data_min + 1e-8)
        scaled = normalized * np.pi
        if scaled.shape[1] > self.n_qubits:
            print(f"Warning: Truncating to {self.n_qubits} dimensions")
            scaled = scaled[:, :self.n_qubits]
        return scaled

    def get_batch(self, batch_idx):
        start = batch_idx * self.batch_size
        end = min(start + self.batch_size, len(self.data))
        return self.normalized_data[start:end]

    def get_batch_generator(self):
        n_batches = len(self.data) // self.batch_size + 1
        for i in range(n_batches):
            yield self.get_batch(i)