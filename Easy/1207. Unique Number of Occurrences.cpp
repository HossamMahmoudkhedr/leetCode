class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size() == 1){
            return false;
        }
        unordered_map<int,int> m;
        set<int> s;
        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }

        for(auto item : m){
            s.insert(item.second);
        }    

        return s.size() == m.size();
    }
};
