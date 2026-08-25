class Solution {
public:
    void findsubset(int ind, vector<int>& ds, vector<int>& nums,
                    vector<vector<int>>& ans) {

        ans.push_back(ds);

        for(int i = ind; i < nums.size(); i++) {

            // Skip duplicate choices at the same recursion level
            if(i != ind && nums[i] == nums[i - 1])
                continue;

            ds.push_back(nums[i]);

            findsubset(i + 1, ds, nums, ans);

            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        findsubset(0, ds, nums, ans);

        return ans;
    }
};