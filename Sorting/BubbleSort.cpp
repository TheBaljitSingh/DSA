 void bubbleSort(int arr[], int n)
    {
       //code here
       for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               if(arr[i]>=arr[j]){
                   swap(arr[i],arr[j]);

               }
           }
           
       }
    }
