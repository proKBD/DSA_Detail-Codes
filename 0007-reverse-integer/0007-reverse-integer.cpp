class Solution {
public:
    int reverse(int x) {
        int store =0;
        long long generate = 0;
        while (x!=0){
            store = x%10;
        generate = (generate*10) + store;
            x/=10;
        }
return (generate <= INT_MAX && generate >= INT_MIN) ? generate : 0;
    }
};