class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i =0, j=nums.size()-1, op=0;
        sort(nums.begin(), nums.end());
        while(i < j){
            int requiredNum = k - nums[i];
            if(requiredNum == nums[j]){
                op++;
                j--;
                i++;
            }else if(requiredNum > nums[j]){
                i++;
            }else{
                j--;
            }
        }

        return op;
    }
};
