int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if (matrixSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int rows = matrixSize;
    int cols = matrixColSize[0];
    int totalElements = rows * cols;
    
    int* result = (int*)malloc(sizeof(int) * totalElements);
    *returnSize = 0;

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // 1. Traverse Right
        for (int i = left; i <= right; i++) {
            result[(*returnSize)++] = matrix[top][i];
        }
        top++;

        // 2. Traverse Down
        for (int i = top; i <= bottom; i++) {
            result[(*returnSize)++] = matrix[i][right];
        }
        right--;

        // Check if we still have rows/columns to process
        if (top <= bottom && left <= right) {
            // 3. Traverse Left
            for (int i = right; i >= left; i--) {
                result[(*returnSize)++] = matrix[bottom][i];
            }
            bottom--;

            // 4. Traverse Up
            for (int i = bottom; i >= top; i--) {
                result[(*returnSize)++] = matrix[i][left];
            }
            left++;
        }
    }

    return result;
}
