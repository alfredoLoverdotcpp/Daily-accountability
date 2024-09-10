//TC - O(N), SC - O(N)
//Approach 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp;
        // Collect all non-zero elements in temp
        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        
        // Move all non-zero elements from temp back to nums
        int nz = temp.size();
        for (int i = 0; i < nz; ++i) {
            nums[i] = temp[i];
        }
        
        // Fill the remaining part of nums with zeroes
        for (int i = nz; i < n; ++i) {
            nums[i] = 0;
        }
    }
};

//Optimized approach:

.
.
