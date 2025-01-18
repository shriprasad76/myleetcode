/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the return array (to store indices of the two numbers)
    int* result = (int*)malloc(2 * sizeof(int));
    if (!result) {
        *returnSize = 0;
        return NULL;
    }

    // Iterate through the array to find the two numbers
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Set the return size to 2
                return result;
            }
        }
    }

    // If no solution is found, free allocated memory and return NULL
    free(result);
    *returnSize = 0;
    return NULL;
}
