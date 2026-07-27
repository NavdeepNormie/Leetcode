class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int largest = nums[0];
        int slargest = INT_MIN;
        int product;


        for(int i = 1; i<nums.size(); i++){
            if(nums[i] > largest){
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > slargest){
                slargest = nums[i];
            }
        }
    product = (largest - 1)*(slargest - 1);
    return product;
        
    }
};