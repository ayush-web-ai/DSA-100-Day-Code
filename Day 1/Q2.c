// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]", i, j);
                return 0;
            }
        }
    }

    return 0;
}
