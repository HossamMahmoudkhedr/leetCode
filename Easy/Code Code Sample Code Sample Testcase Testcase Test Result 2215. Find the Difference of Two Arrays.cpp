class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>> ans(2); 
       unordered_map<int, int> m1;
       unordered_map<int, int> m2;
       for(int i = 0; i < nums1.size();i++){
            if(!m1[nums1[i]]){
                m1[nums1[i]]++;
            }
       }

       for(int i = 0; i < nums2.size();i++){
            if(!m2[nums2[i]]){
                m2[nums2[i]]++;
            }
       }

       for(auto item : m1){
            if(!m2[item.first]){
                ans[0].push_back(item.first);
            }
       }
    
       for(auto item : m2){
            if(!m1[item.first]){
                ans[1].push_back(item.first);
            }
       }
       
       return ans;
    }
};


