/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **pascals = malloc(numRows * sizeof(int*));
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows * sizeof(int));
    int counter = 0;
    for(int i = 0; i < numRows; i++){
        (*returnColumnSizes)[i] = i + 1;
        pascals[i] = malloc((i + 1) * sizeof(int));
        pascals[i][0] = 1;
        pascals[i][counter] = 1;
        for(int y = 1; y < counter; y++){
            pascals[i][y] = pascals[i - 1][y - 1] + pascals[i - 1][y];
        }
        counter++;
    }
    return pascals;
} 