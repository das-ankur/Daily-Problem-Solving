class Solution {
public:
    /*int calculateTotalTime(int k, vector<int> &piles) {
        int time=0;
        for(int i=0;i<piles.size();i++) time+=(int)ceil((float)piles[i]/(float)k);
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=*max_element(piles.begin(),piles.end());
        while(high-low>1) {
            int mid=(low+high)/2;
            int t=calculateTotalTime(mid,piles);
            //cout<<mid<<" "<<t<<endl;
            if(t>h) low=mid+1;
            else high=mid;
        }
        if(calculateTotalTime(low,piles)<=h) return low;
        else return high;
    }*/
    int minEatingSpeed(vector<int>& piles, int h) {
        
        /*bruteforce:-take k=1,2.... and use it to calculate time and subsequently add it & if it is greater than h not a solution
        #1 Bruteforce:-O(N)
        for(int k=1;k<=1e9;k++){
            
            
            if(KokoEatAll(piles,h,k))
               return k;
    
        }
        */
        
        //since previous is O(N) we can select k by the help of simple binary search from 1 to 1e9 or max pile;
        //# BS nlog(n)
        long l=1,r=*max_element(piles.begin(), piles.end());
        
        while(l<=r){
            
            
            int m=l+(r-l)/2;
            
            if(KokoEatAll(piles,h,m))
               r= m-1;
             else
                  l=m+1;
            
            
            
        }
        
        return l;
           
       
    }
    
    bool KokoEatAll(vector<int>& piles, int h,long k){
        
        
        long hour=0;
        for(int i=0;i<piles.size();i++){
            
            
          hour+=ceil(1.0*piles[i]/k);
            
            
        }
        
      return hour<=h;
        
    }

};