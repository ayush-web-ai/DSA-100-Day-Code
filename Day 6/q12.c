void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    // Move all non-zero elements to the front
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }

    // Fill remaining positions with zeros
    while(j < numsSize) {
        nums[j++] = 0;
    }
}
