/* The time complexity of this function is O(n) because we are iterating through the array once to shift all elements to the left by one position. 
The space complexity is O(1) because we are not using any extra space that grows with the input size, we are only using a constant amount of space for the temporary variable. 

Sample input 1:
4
5 7 3 2 
Sample output 1:
7 3 2 5
Explanation of sample input 1:
Move the first element to the last and rest all the elements to the left.
*/

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    
    int temp=arr[0];
    for(int i=0; i<n-1; ++i){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
}
