class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u';            
    }
    int maxVowels(string s, int k) {
        int maxVowels = 0;
        int count =0;
        
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                count++;
            }

            if(i>=k && isVowel(s[i-k])){
                count--;
            }
            maxVowels = max(count, maxVowels);
        }

        return maxVowels;
    }
};
