class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left = findLeftBound(nums, target);
        int right = findRightBound(nums, target);

        return {left, right};
    }

private:
    int findLeftBound(vector<int>& nums, int target) {

        int index = -1;
        int low = 0, high = nums.size() - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                index = mid;
                high = mid - 1;   // Continue searching left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return index;
    }

    int findRightBound(vector<int>& nums, int target) {

        int index = -1;
        int low = 0, high = nums.size() - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                index = mid;
                low = mid + 1;    // Continue searching right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return index;
    }
};