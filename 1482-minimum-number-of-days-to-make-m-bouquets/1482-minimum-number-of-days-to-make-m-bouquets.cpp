class Solution {
public:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int days) {
        int bouquets = 0, flowers = 0;
        
        for (int bloom : bloomDay) {
            if (bloom <= days) {
                flowers++;  // Flower is bloomed
                if (flowers == k) {  // Can form a bouquet
                    bouquets++;
                    flowers = 0;  // Reset counter
                }
            } else {
                flowers = 0;  // Reset if there's a gap
            }
            if (bouquets >= m) return true;
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers = (long long)m * k;
        if (bloomDay.size() < totalFlowers) return -1;  // Not enough flowers
        
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                result = mid;
                right = mid - 1;  // Try to minimize days
            } else {
                left = mid + 1;
            }
        }
        
        return result;
    }
};
