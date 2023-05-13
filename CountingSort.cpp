#include <iostream>
using namespace std;
void countingsort(int arr[], int n){
  int maxi=0;
  for(int i=0; i<n; i++)
    maxi = max(maxi, arr[i]);

  int count[maxi+1];
  int output[n];
  
  for(int i=0; i<=maxi; i++)
    count[i]=0;
  
  for(int i=0; i<n; i++)
    count[arr[i]]++;
  
  for(int i=1; i<=maxi; i++)
      count[i] += count[i-1];

  for(int i=n-1; i>=0; i--){
    output[count[arr[i]-1]] = arr[i];
    count[arr[i]]--;
  }
  
  for(int i=0; i<n; i++)
    arr[i]=output[i];
}
int main() {
  int arr[6]= {6,7,19,23,2,4};
  countingsort(arr,6);
  for(int i=0; i<6; i++)
      cout<<arr[i]<<" ";
}
