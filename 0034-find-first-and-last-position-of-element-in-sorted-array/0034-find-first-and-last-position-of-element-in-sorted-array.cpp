class Solution {
public:

    int first_occurrence(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            else{
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }
    int last_occurrence(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            else{
                ans = mid;
                low = mid +1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = first_occurrence(nums,target);
        int last = last_occurrence(nums,target);

        return {first,last};

        
        
    }
};