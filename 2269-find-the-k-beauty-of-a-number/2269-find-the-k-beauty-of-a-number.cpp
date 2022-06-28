class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int n=ceil(log10(num));
        if(n==log10(num))
            n++;
        if(num<10)
            return 1;
        //cout<<n<<endl;
        vector<int> nums(n);
        int i=nums.size()-1,j;
        n=num;
        while(num!=0) {
            nums[i]=num%10;
            num/=10;
            i--;
        }
        num=n;
        /*for(int n:nums)
            cout<<n<<" ";*/
        i=0,j=0;
        long long int temp=0,d=1;
        while(j-i+1<=k) {
            temp=temp*10+nums[j];
            j++;
            d*=10;
        }
        d/=10;
        //cout<<endl<<d<<endl;
        int pcount=0;
        //cout<<i<<" "<<(j-1)<<" "<<temp<<" ";
        while(j<nums.size()) {
            if(temp!=0 && num%temp==0)
                pcount++;
            temp%=d;
            i++;
            temp*=10;
            temp+=nums[j];
            j++;
            //cout<<pcount<<endl;
        }
        //cout<<i<<" "<<j<<" "<<temp<<" ";
        if(temp!=0 && num%temp==0) {
            pcount++;
        }
        //cout<<pcount<<endl;
        //cout<<num;
        //cout<<endl;
        return pcount;
    }
};