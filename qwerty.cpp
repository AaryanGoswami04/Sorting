#include <iostream>
using namespace std;
#include <stack>
int main() {
  stack<int> st;

  // creating the sample stack
  st.push(61);
  st.push(7);
  st.push(14);
  st.push(4);
  st.push(2);
  st.push(1);
  st.push(9);
  st.push(8);

  int k = 2;
  int maxi = 0; // to keep track of maximum element
  while (k>0) {   // Perform until k=0 i.e perform k operations
    int top = st.top();
    st.pop();

    maxi = max(maxi,top); // check if top can be the max element encountered till now

    k--; // 1 operation done so reduce k by 1

    if (k == 0 and  st.top() < maxi) // if all operations are done and now top of stack is less than maxi then push maxi back into the stack (becuz we need to maximize the top element)
       st.push(maxi);
  }
  cout << st.top();
}
