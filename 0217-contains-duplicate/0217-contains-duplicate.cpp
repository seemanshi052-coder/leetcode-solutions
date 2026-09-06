class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = sizeof(nums) / sizeof(nums[0]); 
        std::sort(nums.begin(), nums.end());
        for (int i =0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])   return true;
         
        }
        return false;
    }
};