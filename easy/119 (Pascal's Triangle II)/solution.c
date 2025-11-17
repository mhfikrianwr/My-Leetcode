/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int **pascals = malloc((rowIndex + 1) * sizeof(int*));
    for(int i = 0 ; i <= rowIndex; i++){
        pascals[i] = malloc((i + 1) * sizeof(int));
        pascals[i][0] = 1;
        pascals[i][i] = 1;
        for(int y = 1; y < i ; y++){
            pascals[i][y] = pascals[i-1][y] + pascals[i - 1][y - 1];
        } 
    }
    return pascals[rowIndex];
}