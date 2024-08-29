//Rotating the array to the left by K places

//Approach 1
//TC-O(n) and SC- O(n)
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    //Handling the case, if K is larger than the array size
    k%=n;
    vector <int> r;

    for(int i=k; i<n; ++i){
        r.push_back(arr[i]);
    }
    for(int i=0; i<k;++i){
        r.push_back(arr[i]);
    }
    return r;
}

//Approach 2
