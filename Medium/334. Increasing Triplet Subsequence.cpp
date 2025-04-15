class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fmin = INT_MAX;
        int smin = INT_MAX;

        for(int i = 0; i < nums.size();i++){
            if(nums[i] > smin){
                return true;
            }

            if(nums[i] <= fmin){
                fmin = nums[i];
            }else{
                smin = nums[i];
            }
        }

        return false;
    }
};
