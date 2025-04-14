class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && n == 1 && !flowerbed[0]){
            return true;
        }
        for(int i =0; i < flowerbed.size() && n; i++){
            if(flowerbed[i] == 0){
                if(i == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    n--;
                    i++;
                }else if(i == flowerbed.size() - 1){
                    if( flowerbed[i-1] == 0){

                    flowerbed[i] = 1;
                    n--;
                    }
                }else{
                    if(flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
                        flowerbed[i] = 1;
                        n--;
                        i++;
                    }
                }
            }
        }


        return n==0;
    }
};
