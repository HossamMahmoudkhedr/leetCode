class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";
        int i = 0, j = 0;
        while(i < word1.size() && j < word2.size()){
            newWord = newWord + word1[i] + word2[j];
            i++;
            j++;
        }

        if(i < word2.size())   
            newWord += word2.substr(i);

        if(i < word1.size())
            newWord += word1.substr(i);
        
        return newWord;
    }
};
