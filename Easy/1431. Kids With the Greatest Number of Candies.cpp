class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result(candies.size());
        

        auto maxElm = *max_element(candies.begin(), candies.end());

        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxElm){
                result[i] = true;
            }else{
                result[i] = false;
            }
        }

        return result;
    }
};
