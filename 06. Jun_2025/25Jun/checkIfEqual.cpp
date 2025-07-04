class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        
        // unordered_map<char, int>freq;
        // for(char c : s){
        //     freq[c]++;
        // }
        // for(char c {'a'};c <= 'z'; c++){
        //     if(!freq.count(c)){
        //         continue;
        //     }
        //     freq[c]--;
        //     if(freq[c] == 0){
        //         freq.erase(c);
        //     }
        //     unordered_set<int> temp;
        //     for(auto& p : freq){
        //         temp.insert(p.second);
        //     }
        //     if(temp.size() == 1){
        //         return true;
        //     }
        //     freq[c]++;
        // }
        // return false;
        
        vector<int> freq(26,0);
        unordered_map<int,int> mp;
        for(int i = 0; i < s.size(); i++ ){
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(freq[i])
                mp[freq[i]]++;
        }
        auto itr = mp.begin();
        if(mp.size() == 1){
            return true;
        } else if(mp.size() == 2) {
            auto itr = mp.begin();
            int f1 = itr->first, c1 = itr->second;
            itr++;
            int f2 = itr->first, c2 = itr->second;
            if((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1)){
                return true;
            }
            if(abs(f1-f2) == 1 && ( (f1 > f2 and c1 == 1) || (f2 > f1 and c2 == 1)) ){
                return true;
            }
            return false;
        } else{
            return false;
        }
    }
};