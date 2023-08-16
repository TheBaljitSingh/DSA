int binarySearch(int n){
    int s =0;
    int e = n-1;
    long long int mid = s+ (e-s)/2;
    long long int ans = -1;
    while(s<=e){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square <n){
            ans = mid;
            s = mid -1;
        }
        else{
            e = mid-1;
        }
            int mid = s+ (e-s)/2;

    }
    return ans;
}