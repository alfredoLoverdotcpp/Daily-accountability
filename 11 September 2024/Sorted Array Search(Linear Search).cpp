//TC- O(N), SC-O(1)

int searchInSorted(int arr[], int N, int K) {
    
    int count=0;
    for(int i=0; i<N; ++i){
        if(arr[i]==K){
            count++;
        }
    }
    if(count>0) return 1;
    else return -1;
    
}
