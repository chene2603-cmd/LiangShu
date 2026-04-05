class QuantumDistanceCache:
    def __init__(self, max_size=10000):
        self.cache = {}
        self.max_size = max_size

    def get(self, data_hash, centroid_hash):
        key = (data_hash, centroid_hash)
        return self.cache.get(key)

    def put(self, data_hash, centroid_hash, distance):
        if len(self.cache) >= self.max_size:
            self.cache.pop(next(iter(self.cache)))
        key = (data_hash, centroid_hash)
        self.cache[key] = distance