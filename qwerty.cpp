#include <iostream>
using namespace std;

int arr[1000];
int top=0;

class Stack{
  public:
  Stack(){
    top =-1;
  }

  void push(int x){
    top++;
    arr[top]=x;
  }

  void pop(){
    top--;
  }
};
int main() {
  Stack s;
  s.push(10);
  s.push(50);
  s.push(30);
  s.push(40);
  
  int k=5;
  int maxi=0;
  
  while(k){
    if(top >=0){
       maxi=max(maxi,arr[top]);
      s.pop();
    }
    else
      s.push(maxi);
    
    k--;
    
    if(k==1 and arr[top-1]<=maxi){
        s.push(maxi);
        k--;
    }
    else if(k==1 and arr[top-1]>maxi){
        s.pop();
        k--;
    }
  }
  cout<<arr[top];
}
