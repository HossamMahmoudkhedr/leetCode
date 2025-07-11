/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       long long low = 0, high = n, mid=(low+high)/2;
       while(low<=high && guess(mid) != 0){
        mid = (low+high) /2;
        if(guess(mid) == -1){
            high = mid -1;
        }else if(guess(mid) == 1){
            low = mid+1;
        }
       } 

       return mid;
    }
};
