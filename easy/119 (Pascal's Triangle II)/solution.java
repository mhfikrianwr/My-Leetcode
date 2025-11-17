class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<List<Integer>> l = new ArrayList<>();
        for(int i = 0; i <= rowIndex; i++){
            l.add(new ArrayList<>());
            l.get(i).add(1);
            for(int y = 1; y < i; y++){
                l.get(i).add(l.get(i - 1).get(y - 1) + l.get(i - 1).get(y));
            }
            if(i > 0) l.get(i).add(1);
        }
        return l.get(rowIndex);
    }
}