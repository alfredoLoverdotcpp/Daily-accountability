//If you just wanna return the number of unique elements and not the modified array
//TC - O(N), SC - O(1)

int removeDuplicates(vector<int> &arr, int n) {
	int count=0;
	for(int i=0; i<arr.size(); ++i)
	{
		if(arr[i-1]!=arr[i])
		count++;
	}
	return count;
}

//Returning the modified array too, TC - O(N), SC-O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        for(int i=1; i<n; ++i)
        {   
            if(nums[i]!=nums[i-1])
            {
                //every unique element is added to count
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }

    //Using a hashset for storing unqiue elements and then adding them back to the array
    //A brute force approach, TC - O(N), SC-O(N)
    set<int> sett;
    for(int i=0; i<n; ++i){
        sett.insert(nums[i]);
    }
    int k = sett.size();
    int j =0;
    for(auto x:sett){
        nums[j++]=x;
    }
    return k;
    }
    
};
