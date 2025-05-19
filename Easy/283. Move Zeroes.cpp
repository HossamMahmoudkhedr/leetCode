class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = nums.size()-1,l;
        while(i <= j){
            int lastValue;
            if(nums[i] == 0){
                lastValue = nums[j];
                nums[j] = nums[i];
                for(l = i; l < j-1; l++){
                    nums[l] = nums[l+1];
                }
                nums[l] = lastValue;
                j--;
            }else{
                i++;
            }
        }
    }
};
