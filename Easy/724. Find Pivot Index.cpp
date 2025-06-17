class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        deque<int> leftSum;
        deque<int> rightSum;

        int lsum = 0;
        int rsum = 0;

        for(int i = 0; i < nums.size(); i++){
            leftSum.push_back(lsum);
            lsum += nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--){
            rightSum.push_front(rsum);
            rsum += nums[i];
        }

        for(int i = 0; i < leftSum.size(); i++){
            if(leftSum[i] == rightSum[i]){
                return i;
            }
        }

        return -1;
    }
};
