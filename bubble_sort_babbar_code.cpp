for(int i=0; i<n-1; i++){  // for(int i=1; i<n; i++)
    // for round 1 to n-1
    for(int j=0; j<n-1; j++){    // [j<n-i] bhi kar shakta hai[new idea given bu babbar]
        if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }

}

// applying boolean expression
void bubbleSort(vector<int>& arr, int n)
{   
for(int i=0; i<n-1; i++){  // for(int i=1; i<n; i++)
    // for round 1 to n-1
    bool swapped = false;
    for(int j=0; j<n-1; j++){
        if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped =true;
          }
      }
    if(swapped = false)
        break;
   }
}

