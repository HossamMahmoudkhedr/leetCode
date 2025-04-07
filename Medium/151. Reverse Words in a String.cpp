class Solution {
public:
    string reverseWords(string s) {
        vector <string> v;
        
        string word = "";
        for(int i =0 ;i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(word != ""){
                    v.push_back(word);
                    word = "";
                }
            }
        }
        if(word != ""){   
            v.push_back(word);
        }

        string result = "";

        for(int i =  v.size()-1; i >= 0; i--){
            result += v[i];
            if(i > 0){
                result += " ";
            }
        }

        return result;

    }
};
