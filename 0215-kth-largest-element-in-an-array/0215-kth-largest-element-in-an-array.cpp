class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // return nums[n-k];
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int i;
        for(i=0;i<k;i++){
            minHeap.push(nums[i]);
        }
        for(i = k;i<nums.size();i++){
            if(minHeap.top() < nums[i]){
                minHeap.pop();
                minHeap.push(nums[i]);
            }


        }
        return minHeap.top();
        
    }
};