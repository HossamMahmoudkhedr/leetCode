class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }
        vector<int> freqs1; 
        vector<int> freqs2;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for(int i = 0; i < word1.size(); i++){
            m1[word1[i]]++;
        }

        for(int i = 0; i < word2.size(); i++){
            m2[word2[i]]++;
        }

        string w1="", w2="";

        for(auto item : m1){
            w1+= item.first;
            freqs1.push_back(item.second);
        }
        for(auto item : m2){
            w2+= item.first;
            freqs2.push_back(item.second);
        }
        
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());

        if(w1 != w2){
            return false;
        }
        
        sort(freqs1.begin(), freqs1.end());
        sort(freqs2.begin(), freqs2.end());

        return freqs1 == freqs2;
    }
};
