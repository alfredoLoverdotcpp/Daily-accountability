/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false
*/
//TC - O(n), SC - O(1) The time complexity of this solution is O(n), where n is the length of the string t
//The space complexity is O(1) because we only use a constant amount of extra space, regardless of the input size.

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;

        for(int i=0; i<t.size(); ++i){
            if(j<s.size() && t[i]==s[j]) j++;
          }
        
        return j==s.size();
    }
};


//Follow Up question: Many s strings, s1, s2, s3 ... sk
