class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int largest = 0;
        int slargest = 0;
        int product = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > largest){
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > slargest){
                slargest = nums[i];
            }
        product = (largest - 1)*(slargest - 1);
        }
    return product;
    }
};