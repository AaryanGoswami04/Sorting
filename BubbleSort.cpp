//Worst Case TC:O(N^2)
//Best case TC: O(N)
//SC:O(1)
bool swapped = false;
for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      if(arr[j]>arr[j+1]){
          swapped = true;
          swap(arr[j],arr[j+1]);
    }
  }
   if(swapped == false)
        break;
}
