class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int sz =  triangle.size();
        for(int i = 1; i < sz; i++){
            int y = triangle.get(i).size();
            for(int q = 0; q < y; q++){
                if(q == 0){
                    triangle.get(i).set(q,triangle.get(i).get(q) + triangle.get(i - 1).get(q));
                }else if(q == y - 1){
                    triangle.get(i).set(q,triangle.get(i).get(q) + triangle.get(i - 1).get(q - 1));
                }else{
                    int a = triangle.get(i).get(q) + triangle.get(i - 1).get(q);
                    int b = triangle.get(i).get(q) + triangle.get(i - 1).get(q - 1);
                    int val = Math.min(a,b);
                    triangle.get(i).set(q,val);
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < triangle.get(sz-1).size(); i++){
            if(i == 0) ans = triangle.get(sz-1).get(0);
            else if(triangle.get(sz-1).get(i) < ans) ans = triangle.get(sz-1).get(i);
        }
        return ans;
    }
}