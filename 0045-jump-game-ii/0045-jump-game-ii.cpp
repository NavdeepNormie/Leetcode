class Solution {
public:
    int jump(vector<int>& nums) {
        int totaljumps = 0;
        int lastjump = 0;
        int destination = nums.size() - 1;
        int maxReach = 0;

        if(nums.size() == 1) return 0;

        for(int i = 0; i<nums.size()-1; i++){
            maxReach = max(maxReach, i + nums[i]);

            if(i == lastjump){
                lastjump = maxReach;
                totaljumps++;
            }
                if(lastjump>=destination){
                return totaljumps;
            }
        }
    return totaljumps;
    }
};