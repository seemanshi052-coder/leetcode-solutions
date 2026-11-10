/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {

    int *ans = malloc(numsSize * sizeof(int));

    int lessCount = 0;
    int equalCount = 0,greatCount=0;

    // Pass 1: Count elements smaller than pivot
for(int i=0;i<numsSize;i++){
    if(nums[i]<pivot)  lessCount++;
    else if(nums[i]==pivot)  equalCount++;
}

int small = 0;
int eq = lessCount;
int large = lessCount+equalCount;
for(int i=0;i<numsSize;i++){
if(nums[i]<pivot){
    ans[small++]=nums[i];
}
else if(nums[i]==pivot){
    ans[eq++]=nums[i];
}
else{
    ans[large++]=nums[i];
}}

    *returnSize = numsSize;
    return ans;
}