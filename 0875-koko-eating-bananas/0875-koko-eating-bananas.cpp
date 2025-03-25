class Solution {
public:

    bool canEatAll(vector<int>& piles, int h, int k){
        int totalHours = 0;
        for(int bananas : piles){
            totalHours += (bananas + k - 1) / k;
        }
        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int mid = (low + (high- low))/2;

        while(low < high){
            mid = low + (high - low) / 2;
            
            if(canEatAll(piles,h,mid)){
                high = mid;
            }
            else {
                low = mid +1;
            }
        }
        return low;

    }
};