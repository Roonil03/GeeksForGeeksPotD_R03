class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string temp;
        for(char ch : s){
            if(isalnum(ch)){
                temp += tolower(ch);
            }
        }
        int l {0}, r = temp.size() - 1;
        while(l < r){
            if(temp[l] != temp[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};