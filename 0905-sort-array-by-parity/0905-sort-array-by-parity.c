#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    int *ans = (int *)malloc(sizeof(int) * numsSize);
    int k = 0;

    // Store all even numbers
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            ans[k] = nums[i];
            k++;
        }
    }

    // Store all odd numbers
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 != 0) {
            ans[k] = nums[i];
            k++;
        }
    }

    return ans;
}