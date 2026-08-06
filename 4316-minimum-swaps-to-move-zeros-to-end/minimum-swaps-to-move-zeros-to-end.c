int minimumSwaps(int* nums, int numsSize) {
        int l = 0, r = numsSize-1, ans = 0;
        while(l<r){
            if(nums[r] == 0){
                r--;
            }else if(nums[l] == 0 && nums[r] != 0){
                ans++;
                l++, r--;
            }else l++;
        }
        return ans;
}