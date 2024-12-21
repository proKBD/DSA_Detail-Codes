class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
        int r = 0;
        while(x){
            r = x%10;
            ans = (ans*10)+r;
            x/=10;
        }   
        return ((INT_MAX < ans) || (INT_MIN > ans))? 0 : ans ;
    }
};