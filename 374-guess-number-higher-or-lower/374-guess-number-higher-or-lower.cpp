/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int low=1, high=n, mid, ans;
        while(low<=high) {
            mid=(high+low)/2;
            if(guess(mid)==0) {
                ans=mid;
                break;
            }
            else if(guess(mid)==-1)
                high=mid-1;
            else
                low=mid+1;
        }
        return ans;
    }
};