/*** Finding Largest Element in the Array ***

  Approach 1
//TC - O(N log N)
//The time complexity of the comparison-based sorting algorithms, like the one used in the standard library's sort(), is O(n log n), where n is the size of the input array.

//SC- O(log N)
//The space complexity of comparison-based sorting algorithms is typically O(log n) for in-place sorting algorithms like Quick Sort, or O(n) for non-in-place algorithms like Merge Sort.
//In this case, the space complexity is O(log n), as the sort() function uses an in-place sorting algorithm. */

class Solution {
  public:
    int largest(vector<int> &arr) {
       sort(arr.begin(), arr.end());
           return arr[arr.size()-1];
    }
};

/* Approach 2

  TC - This linear scan solution has a better time complexity of O(n).
  SC - This linear scan solution has a better space complexity of O(1). */

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max = arr[0];
    for(int i=0; i<n; ++i){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}




