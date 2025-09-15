class Solution {
  public:
    bool stringStack(string &pat, string &tar) {
        // code here
        // int n = pat.size(), m = tar.size();
        // int i {0}, j {0};
        // while(i < n){
        //     if(tar[j] == pat[i++]){
        //         j++;
        //     }
        // }
        // return j == m;
        int i = pat.length() - 1 , j = tar.length() - 1;
        while(i >= 0){
            if(j >= 0 && pat[i] == tar[j]){
                i--;
                j--;
            } else{
                i -= 2;
            }
        }
        return j < 0;
    }
};