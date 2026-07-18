class Solution {
public:
    int calculateSum(vector<int>& nums, int divisor) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + divisor - 1) / divisor;   // ceil(nums[i] / divisor)
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int low = 1;
        int high = maxi;
        while(low <= high){
            int mid = (low + high)/2;
            if(calculateSum(nums, mid) <= threshold){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};