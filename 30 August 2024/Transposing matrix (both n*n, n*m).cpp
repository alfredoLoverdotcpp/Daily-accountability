/*           N*N
The time complexity of the transpose function is O(n^2) because there are two nested loops iterating over all elements of the matrix. 
The space complexity is O(1) because the function is modifying the input matrix in place without using any additional space.*/
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0; i<n; ++i){
            for(int j=0; j<=i; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

/*              N*M
The time complexity of this solution is O(m*n), where m is the number of rows and n is the number of columns in the input matrix. 
This is because we iterate through each element in the matrix once to transpose it.

The space complexity of this solution is O(m*n) as well, because we are creating a new matrix of size n*m to store the transposed matrix.*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<vector<int>> result(col, vector<int>(row,0));
        for(int i=0; i<col; ++i){
            for(int j=0; j<row; ++j){
                result[i][j]=matrix[j][i];
            }
        }
        return result;
    }
};
