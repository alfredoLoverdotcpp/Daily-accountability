/*return the list of all pairs of elements such that each sum of elements of each pair equals 'S'
Each pair should be sorted i.e the first value should be less than or equals to the second value. 
Return the list of pairs sorted in non-decreasing order of their first value. 
In case if two pairs have the same first value, the pair with a smaller second value should come first.*/

//TC- O(n^2), SC - O(n^2), The time complexity of this function is O(n^2) because there are two nested loops iterating over the input array of size n. 
//The space complexity is O(n^2) as well, as the function creates a vector of vectors to store the pairs of numbers that sum up to the target value.

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n = arr.size();
   vector <vector <int>> result;

   for(int i=0; i<n; ++i){
      for(int j=i+1; j<n; ++j){
         if(arr[i]+arr[j]==s){
            result.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
         }
      }
   }
   sort(result.begin(), result.end());

   return result;
}


//TC- O(n^2), Sc- ..?
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n = arr.size();
   vector<vector<int>> ans;
   
   for(int i=0; i<n; ++i){
      for(int j=i+1; j<n; ++j){
         if(arr[i]+arr[j]==s){
            vector<int> pair(2);
            pair[0]=arr[i];
            pair[1]=arr[j];
            ans.push_back(pair);
         }
      }
   }
   vector<vector<int>> res(ans.size(),vector<int>(2,0));
   for(int i=0; i<ans.size(); ++i){
      int a = ans[i][0], b=ans[i][1];
      res[i][0]=min(a,b);
      res[i][1]=max(a,b);
   }
   sort(res.begin(), res.end());
   return res;
}
