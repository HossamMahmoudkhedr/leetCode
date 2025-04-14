class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        bool hasZero = false;
        bool hasTwoZeroes = false;
        for(int i =0; i < nums.size() ; i++){
            if(nums[i] == 0){
                if(hasZero){
                    hasTwoZeroes = true;
                }
                hasZero = true;
                answer.push_back(nums[i]);
                if(i > 0){
                    nums[i] = nums[i-1];
                }
                continue;
            }

            if(i == 0){
                answer.push_back(nums[i]);
            }else{
                answer.push_back(nums[i]);
                if(nums[i-1] != 0){
                    nums[i] *= nums[i-1];
                }
            }
        }
        if(hasTwoZeroes){
            for(int i =0; i < answer.size();i++){
                answer[i] = 0;
            }
        }else if(hasZero){
            for(int i =0; i < answer.size();i++){
                if(answer[i] == 0){
                    answer[i] = nums[nums.size() - 1];
                }else{
                    answer[i] = 0;
                }
            }
        }else{
            for(int i =0; i < answer.size();i++){
                answer[i] = nums[nums.size() - 1] / answer[i]; 
            }
        }

        return answer;
    }
};
