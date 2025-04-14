class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        string foundVowels = "";
        for(int i = 0; i < s.size();i++){
            if(vowels.find(s[i]) != string::npos){
                foundVowels += s[i];
            }
        }
        reverse(foundVowels.begin(), foundVowels.end());
        int j = 0;
        for(int i = 0; i < s.size();i++){
            if(vowels.find(s[i]) != string::npos){
                s[i] = foundVowels[j];
                j++;
            }
        }
        return s;
    }
};
