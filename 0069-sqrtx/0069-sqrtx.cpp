class Solution {
public:
    int mySqrt(int x) {
        long long s=1,e=x/2,m;
        long long ans;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if (m*m<=x)
            {
                ans=m;
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return ans;
    }
        
};