class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";

        if(chars.size() == 1){
            return 1;
        }

        int counter = 1;
        char begin = chars[0];
        for(int i = 1; i < chars.size(); i++){
            if(chars[i] == begin){
                counter++;
            }else{
                if(counter == 1){
                    s += begin;
                }else{
                    s += begin + to_string(counter);
                }
                    begin = chars[i];
                    counter = 1;
            }
        }

        if(counter == 1){
            s += begin;
        }else{
            s += begin + to_string(counter);
        }

        chars.resize(s.size());
        
        for(int i = 0; i < chars.size(); i++){
            chars[i] = s[i];
        }

        return chars.size();
    }
};
