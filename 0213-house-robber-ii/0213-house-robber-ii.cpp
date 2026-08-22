class Solution {
public:

    int robhelper(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];

        vector<int> dp(nums.size());

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i < nums.size(); i++) {
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }

        return dp[nums.size() - 1];
    }

    int rob(vector<int>& nums) {

        if(nums.size() == 1){
            return nums[0];
        }
        vector<int> skipfirsthouse(nums.size() - 1);
        vector<int> skiplasthouse(nums.size() - 1);

        for(int i = 0; i < nums.size() - 1; i++) {
        skipfirsthouse[i] = nums[i + 1];
        skiplasthouse[i] = nums[i];
        }

        int lootskippingfirst = robhelper(skipfirsthouse);
        int lootskippinglast = robhelper(skiplasthouse);

        return max(lootskippingfirst, lootskippinglast);
    }
};