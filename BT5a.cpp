// http://www.cplusplus.com/reference/stl/stack/pop/
// stack::push/pop

#include <iostream>
#include <stack>
using namespace std;


// Modify the program to push and pop the characters 'a', 'b', ...,'e'
// instead of numbers 0..4.
void foo(){
  stack<char> mystack;
  for (char i= 'a'; i<='e'; ++i) mystack.push(i);

  cout << "Popping out elements...";
  while (!mystack.empty()){
     cout << " " << mystack.top();
     mystack.pop();
  }
  cout << endl;
}

int main (){

  foo();

}
