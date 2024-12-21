class Solution {
public:

    int GCD(int a, int b){
        if(b==0) return a;
        return GCD(b,a%b);

    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int b = nums[0];
        int a = nums[nums.size()-1];

        if(a==b){
            return a;
        }
        else{

        int ans = GCD(a,b); 

        return ans;
        }

    }
};