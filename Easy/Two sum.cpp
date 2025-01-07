class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool flag = false;
        vector<int> answer(2,0);
        if(!nums.empty()){

        for(int i = 0; i < nums.size() - 1;i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target && i != j){
                    answer[0] = i;
                    answer[1] = j;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        }
        return answer;
        
    }
};

// Better Solution

class Better {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            int secondNum = target - nums[i];
            if(hash.find(secondNum) != hash.end()){
                return {hash[secondNum], i};
            }

            hash[nums[i]] = i;
        }
        return {};
    }
};
