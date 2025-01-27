class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


// using hash table
class Solution2 {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map <int, int> m;
        for(int i = 0; i < s.size();i++){
            m[s[i]] += 1;
        }

        for(int i = 0; i < t.size();i++){
            if(!m[t[i]]){
                return false;
            }
            m[t[i]] -= 1;
        }
        return true;
    }
};

