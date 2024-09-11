/* Input: n = 5, arr[] = [1,2,3,5]
Output: 4
*/
//TC - O(N),SC - O(1)
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        int sum=(n*(n+1))/2;
        int s=0;
        for(int i=0; i<n-1; ++i)          
        {
            s+=arr[i];
        }
        return(sum-s);
    }
};

//Approach 2, XOR operation. Understanding bit manipulation
//TC - O(N), SC - O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allXOR = 0;
        int n = nums.size();

        for(int i=0; i<=n; ++i){
            allXOR = allXOR^i;
        }
        for(int num: nums){
            allXOR = allXOR^num;
        }
        return allXOR;
    }
};
