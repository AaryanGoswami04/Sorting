//TC:O(N^2)
//SC:O(1)
for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
    }
  }
