class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int PosIndex = 0;
        int NegIndex = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                ans[NegIndex] = nums[i];
                NegIndex += 2;
            }
            else{
                ans[PosIndex] = nums[i];
                PosIndex += 2;
            }

        }
        return ans;
    }
};