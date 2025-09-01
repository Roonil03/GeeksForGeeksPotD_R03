class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int res {0};
        // for(int i {0}; i <= n - k; i++){
        //     unordered_map<int, int> freq;
        //     int mf {0};
        //     int mode = INT_MAX;
        //     for(int j = i; j < i + k; j++){
        //         freq[arr[j]]++;
        //         if(freq[arr[j]] > mf || (freq[arr[j]] == mf && arr[j] < mode)){
        //             mf = freq[arr[j]];
        //             mode = arr[j];
        //         }
        //     }
        //     res += mode;
        // }
        // return res;
        unordered_map<int, int> freq;
        map<int, set<int>> freqToElements;
        for (int i {0}; i < k; i++){
            if (freq[arr[i]] > 0) {
                freqToElements[freq[arr[i]]].erase(arr[i]);
                if (freqToElements[freq[arr[i]]].empty()){
                    freqToElements.erase(freq[arr[i]]);
                }
            }
            freq[arr[i]]++;
            freqToElements[freq[arr[i]]].insert(arr[i]);
        }
        auto getMode = [&]() -> int{
            auto maxFreqIt = freqToElements.rbegin();
            return *(maxFreqIt->second.begin());
        };
        res += getMode();
        for (int i = k; i < n; i++){
            int outgoing = arr[i - k];
            int incoming = arr[i];
            freqToElements[freq[outgoing]].erase(outgoing);
            if (freqToElements[freq[outgoing]].empty()){
                freqToElements.erase(freq[outgoing]);
            }
            freq[outgoing]--;
            if (freq[outgoing] > 0){
                freqToElements[freq[outgoing]].insert(outgoing);
            } else {
                freq.erase(outgoing);
            }
            if (freq[incoming] > 0){
                freqToElements[freq[incoming]].erase(incoming);
                if (freqToElements[freq[incoming]].empty()){
                    freqToElements.erase(freq[incoming]);
                }
            }
            freq[incoming]++;
            freqToElements[freq[incoming]].insert(incoming);
            res += getMode();
        }
        return res;
    }
};