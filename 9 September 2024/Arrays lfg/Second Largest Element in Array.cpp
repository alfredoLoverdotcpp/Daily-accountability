//TC - O(N)
//SC - O(1)
class Solution {
  public:
    int print2largest(vector<int> &arr) {
        int n = arr.size();
        int large = arr[0];
        int sLargest = INT_MIN;
        
        for(int i=1; i<n; ++i){
            if(arr[i] > large){
                sLargest = large;
                large = arr[i];
            }
            else if(arr[i] < large && arr[i]>sLargest){
                sLargest = arr[i];
            }
        }
        if(sLargest == INT_MIN) return -1;
        return sLargest;
    }
};
