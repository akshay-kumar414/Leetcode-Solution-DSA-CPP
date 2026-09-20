class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Check mid Part 1 mein hai ya Part 2 mein

            if (nums[mid] > nums[n - 1]) {

                // Part 1

                if (target > nums[n - 1]) {

                    // target bhi Part 1 mein hai

                    if (nums[mid] < target) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }

                }
                else {

                    // target Part 2 mein hai
                    low = mid + 1;
                }
            }

            else {

                // Part 2

                if (target <= nums[n - 1]) {

                    // target bhi Part 2 mein hai

                    if (nums[mid] < target) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }

                }
                else {

                    // target Part 1 mein hai
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};