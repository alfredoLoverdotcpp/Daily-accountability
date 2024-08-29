/*Q) Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
Example 2:

Input:
S = pqr.mno
Output: mno.pqr 
*/

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string>words;
        string word;
        stringstream ss(S);
      /*stringstream is a class in C++ that allows you to treat a string as a stream. 
      It's part of the <sstream> header and provides a way to perform input/output operations on strings, similar to how you would with files or console input/output. 
      This makes it very useful for parsing and formatting strings.*/
        
        while(getline(ss, word, '.')){
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        
        string result;
        for(size_t i=0; i<words.size(); ++i){ 
        //size_t -Ensures that the size can represent any possible value. If 'int' is to be used, it may cause issues if the size exceeds the range of int
            result+=words[i];
            if(i != words.size()-1){
                result+='.';
            }
        }
        return result;
    } 
};
