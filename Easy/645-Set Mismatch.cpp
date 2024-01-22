class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result(2, 0);
        vector<int> repeated;
       
        for (int i = 0; i < nums.size(); i++){
            auto number = find(repeated.begin(), repeated.end(), nums[i]);
            if(number == repeated.end()){
                repeated.push_back(nums[i]);
            }else{
                result[0] = nums[i];
            }            
        }
        for (int i = 0; i< repeated.size();i++){
            if (i + 1 != repeated[i]){
                result[1] = i + 1;
                break;
            }else{
                result[1] = repeated[i] + 1;
            }
        }
        
         if (nums[0] == 2){
            result[1] = 1;
        }
        
        return result;
    }
};
