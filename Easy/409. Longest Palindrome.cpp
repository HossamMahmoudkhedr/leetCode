class Solution {
public:
    int longestPalindrome(string s) {
        int length = 0;
        unordered_map <char, int> m;
        for(int i = 0; i < s.size(); i++){
            if(m[s[i]] > 0){
               m[s[i]] -= 1; 
               length += 2;
            }else{
               m[s[i]] += 1;
            }
        }

        if(length < s.size()){
            return length + 1;
        }
        return length;
    }
};
