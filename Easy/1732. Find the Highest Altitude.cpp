class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i = 0; i < gain.size()- 1; i++){
            gain[i+1] += gain[i];
        }

        sort(gain.begin(), gain.end());

        if(gain[gain.size() - 1] > 0){
            return gain[gain.size()-1];
        }

        return 0;
    }
};

// Another solutions
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maximum = 0;
        if(maximum < gain[0]){
            maximum = gain[0];
        }
        for(int i = 0; i < gain.size() - 1; i++){
            gain[i+1] += gain[i];
            if(gain[i+1] > maximum){
                maximum = gain[i+1];
            }
        }
        return maximum;
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maximum = 0;
        
        for(int i = 0; i < gain.size(); i++){
            if(i == 0 && curr > maximum){
                maximum = gain[0];
            }
            curr += gain[i];
            if(curr > maximum){
                maximum = curr;
            }
        }
        return maximum;
    }
};
