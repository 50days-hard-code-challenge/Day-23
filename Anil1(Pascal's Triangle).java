class Solution {
    public List<Integer> generateRow(int row){
        int ans = 1;
        // Create a ArrayList
        List<Integer> ansRow = new ArrayList<>();
        // add the first ie 1 to the list
        ansRow.add(1);
        // Assume 0-based indexing
        for(int col = 1;col<row; col++){
            ans = ans*(row-col);
            ans = ans/(col);
            ansRow.add(ans);
        }
        return ansRow;
    }
    public List<List<Integer>> generate(int numRows) {
        int N  = numRows;
        List<List<Integer>> ans = new ArrayList<>();
        for(int i = 1;i<=N;i++){
            // just pass the row number & store in temp list
            List<Integer> temp = generateRow(i);
            ans.add(temp);
        }
        return ans;
    }
}
