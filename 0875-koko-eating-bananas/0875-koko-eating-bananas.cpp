class Solution {
public:

    int max(vector<int>& piles) {
        int maxi = piles[0];

        for(int i = 0; i < piles.size(); i++) {
            if(piles[i] > maxi) {
                maxi = piles[i];
            }
        }

        return maxi;
    }

    long long fun(vector<int>& piles, int n, int speed) {
        long long h = 0;

        for(int i = 0; i < n; i++) {
            h = h + piles[i] / speed;

            if(piles[i] % speed != 0) {
                h++;
            }
        }

        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int res = -1;
        int high = max(piles);
        int n = piles.size();

        while(low <= high) {
            int mid = (low + high) / 2;

            long long hour = fun(piles, n, mid);

            if(hour > h) {
                low = mid + 1;
            }
            else {
                res = mid;
                high = mid - 1;
            }
        }

        return res;
    }
};