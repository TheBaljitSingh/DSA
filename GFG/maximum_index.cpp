int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> v;
        
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j<n; j--){
            if(arr[j]>=arr[i]){
                 v.push_back(j-i);
            }                
            }
        }
        int ans = *max_element(v.begin(), v.end());
        return ans;
    }
    