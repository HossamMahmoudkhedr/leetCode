class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, maxArea = 0;
        while(i < j){
            if(height[i] < height[j]){
                if(height[i] * (j - i) > maxArea){
                    maxArea = height[i] * (j - i);
                }
                i++;
            }else{
                if(height[j] * (j - i) > maxArea){
                    maxArea = height[j] * (j - i);
                }
                j--;
            }
        }
        return maxArea;
    }
};


/*
int maximum = *max_element(height.begin(),height.end());
        auto it = find(height.begin(), height.end(), maximum);
        int maxIndex = distance(height.begin(), it);
        int i = 0;
        int maxArea = 0;
        while(i < height.size()){
            if(i != maxIndex){
                if(height[i] * abs(maxIndex - i) > maxArea){
                    maxArea = height[i] * abs(maxIndex - i);
                }
            }
            i++;
        }
       return maxArea;
*/
