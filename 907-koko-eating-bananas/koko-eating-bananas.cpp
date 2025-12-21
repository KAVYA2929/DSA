class Solution {
public:
    int findmax(vector<int>& arr) {
        int maxi = INT_MIN;
        for (int x : arr) {
            maxi = max(maxi, x);
        }
        return maxi;
    }

    long long calculatetotalhours(vector<int>& arr, int hourly) {
        long long totalhrs = 0;
        for (int i = 0; i < arr.size(); i++) {
            totalhrs += (arr[i] + hourly - 1) / hourly; // integer ceil
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long requiredhrs = calculatetotalhours(piles, mid);

            if (requiredhrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
