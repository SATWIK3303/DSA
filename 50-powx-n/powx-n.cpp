class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;
        double ans=1.0;
        if(m<0){
            m=-m;
        }
        while(m>0){
            if(m%2==1){
                ans=ans*x;
                m=m-1;
            }
            else{
                m=m/2;
                x=x*x;
            }
        }
        return n<0 ? 1.0/ans :ans;
    }
};