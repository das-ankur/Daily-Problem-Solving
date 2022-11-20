class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        int i=0,j=0,n=nums.size(),k=0;;
        while(i<n && j<n) {
            int cur=nums[j];
            nums[i]=nums[j];
            while(j<n && nums[j]==cur) j++;
            i++;
            k++;
            //cout<<"Iteration: "<<endl;
            //cout<<"cur: "<<cur<<endl;
            //for(int x: nums) cout<<x<<" ";
            //cout<<endl;
            //cout<<"k: "<<k<<" i: "<<i<<" j: "<<j<<endl;
        }
        return k;
        */
        /*
        // Practice 1
        int n=nums.size();
        int count=0;
        for(int i=0,j=0;i<n;i++,j++) {
            while(i+1<n && nums[i]==nums[i+1]) i++;
            nums[j]=nums[i];
            count++;
        }
        return count;
        */
        // Practice 2
        int n=nums.size();
        int k=0;
        for(int i=0,j=0;i<n;i++,j++,k++) {
            while(i+1<n && nums[i]==nums[i+1]) i++;
            nums[j]=nums[i];
        }
        return k;
    }
}; 