class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string> rows;
        vector<string> cols;
        int countPairs = 0;

        for(int i =0; i < grid.size();i++){
            string nums1="";
            string nums2="";
            for(int j = 0; j < grid.size();j++){
                string word1 = to_string(grid[i][j]);
                string word2 = to_string(grid[j][i]);
                nums1+= word1 + " ";
                nums2+= word2 + " ";
            }

            rows.push_back(nums1);
            cols.push_back(nums2);  
        }

        for(int i = 0; i < rows.size();i++){
            int num = count(cols.begin(), cols.end(), rows[i]);
            if(num >= 1){
                countPairs += num;
            }
        }
        
        return countPairs;
    }
};
