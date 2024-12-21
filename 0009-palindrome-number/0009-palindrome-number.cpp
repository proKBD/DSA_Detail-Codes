class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
   int copy = x;
        int store =0;
        long long generate = 0;
        while (copy!=0){
            store = copy%10;
        generate = (generate*10) + store;
            copy/=10;
        }

        if(x==generate){
            return true;
        }
        else{
            return false;
        }
        
    }
};