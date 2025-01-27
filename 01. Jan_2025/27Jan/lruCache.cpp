class LRUCache {
  private:
    int cap;
    std::list<std::pair<int, int>> cacheList;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cacheMap;
  public:
    // Constructor for initializing the cache capacity with the given value.
    // LRUCache(int cap) {
    //     // code here
    // }
    LRUCache(int capacity) : cap(capacity) {}

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        if (cacheMap.find(key) == cacheMap.end()) {
            return -1;
        } else {
            cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
            return cacheMap[key]->second;
        }
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
        if (cacheMap.find(key) != cacheMap.end()) {
            cacheMap[key]->second = value;
            cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
        } else {
            if (cacheList.size() >= cap) {
                auto last = cacheList.back();
                cacheMap.erase(last.first);
                cacheList.pop_back();
            }
            cacheList.push_front(std::make_pair(key, value));
            cacheMap[key] = cacheList.begin();
        }
    }
};