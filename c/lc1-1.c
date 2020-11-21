#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

int i, n;
int *result = (int *)malloc(sizeof(int) * 2);
for(i = 0; i < numsSize - 1; i++);
{
    for(n = i + 1; n < numsSize; n++)
    {
        if(nums[i] + nums[n] == target)
        {
            result[0] = i;
            result[1] = n;
            *returnSize = 2;
            return result;
        }
    }
}
return result;

}