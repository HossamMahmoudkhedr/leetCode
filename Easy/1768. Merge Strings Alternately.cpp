class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";
        int i; 
        for(i = 0; i < word1.size(); i++){
            if(i == word2.size()){
                break;
            }

            newWord += word1[i];
            newWord += word2[i];
        }

        if(i < word2.size()){
            
            newWord += word2.substr(i, word2.size());
            
        }

        if(i < word1.size()){
            
            newWord += word1.substr(i, word1.size());
            
        }
        return newWord;
    }
};
