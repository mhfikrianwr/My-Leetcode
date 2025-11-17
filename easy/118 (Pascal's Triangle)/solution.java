class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> pascals = new ArrayList<>();
        int counter = 0;
        for(int i = 0; i < numRows; i++){
            pascals.add(new ArrayList<>());
            pascals.get(i).add(1);
            for(int y = 1; y<counter; y++){
                int value = pascals.get(i - 1).get(y - 1) + pascals.get(i - 1).get(y);
                pascals.get(i).add(value);
            }
            if(i != 0 ) pascals.get(i).add(1);
            counter++;
        }
        return pascals;
    }
}