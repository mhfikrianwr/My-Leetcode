#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    int ans = triangle[0][0];
    for(int i = 1; i < triangleSize; i++){
        for(int y = 0; y < triangleColSize[i]; y++){
            if(y == 0){
                triangle[i][y] = triangle[i][y] + triangle[i-1][y];
            }else if(y == triangleColSize[i] - 1){
                triangle[i][y] = triangle[i][y] + triangle[i-1][y-1];
            }else{
                triangle[i][y] = triangle[i][y] + MIN(triangle[i - 1][y], triangle[i - 1][y - 1]);
            }
            if(i == triangleSize - 1){
                if(y == 0) ans = triangle[i][y];
                else ans = MIN(ans, triangle[i][y]);
            }
        }
    }
    return ans;
}