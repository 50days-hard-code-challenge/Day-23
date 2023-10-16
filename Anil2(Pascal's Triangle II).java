class Solution {
    public List<Integer> getRow(int rowIndex) {
         long ans = 1;  // Given the previous element in the row
        // Create a list
        List<Integer> ansRow = new ArrayList<>();
        // add the first element to the list
        ansRow.add(1);
        // 0-based indexing
        for(int col = 1; col<=rowIndex; col++){
            ans = ans*(rowIndex+1-col);
            ans = ans/col;
            ansRow.add((int)ans);
        }
        return ansRow;
    }
}
