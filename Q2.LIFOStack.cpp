#include <bits/stdc++.h>
using namespace std;
#define SIZE 10 
class Stack
{
  // int n=SIZE;
  int _array1[SIZE], _array2[2 * SIZE];
  int topOfStack;

public:
  Stack()
  {
    topOfStack = -1;
  }

  void push(int n)
  {
    if (topOfStack < SIZE)
      _array1[++topOfStack] = n;
  }
 
  void pop()
  {
    topOfStack--;
  }
  
  void subPrint(int arr[])
  {
    for (int i = topOfStack; i >= 0; i--)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
 
  void resetStack()
  {
    if (topOfStack == SIZE - 1)
    {
      cout << "Stack2:: ";
      for (int i = SIZE - 1; i >= 0; i--)
      {
        int l = 0;
        _array2[l++] = _array1[i];
        cout << _array2[l - 1] << " ";
      }
      cout << endl;
      topOfStack = -1;
    }
  }
  /*
    * prints in the required form
    */
  void print()
  {
    if (topOfStack < SIZE - 1)
    {
      cout << "Stack1:: ";
      subPrint(_array1);
    }
    else if (topOfStack > SIZE - 1 && topOfStack < 2 * SIZE)
    {
      cout << "Stack1:: ";
      subPrint(_array2);
    }
    else if (topOfStack == SIZE - 1)
    {
      cout << "Stack1 is now full\nStack1::";
      subPrint(_array1);
      resetStack();
      cout << "elements moved to stack2\n";
      // cout << "2=>";
      // subPrint(_array2);
      return;
    }
  }
};

int main()
{
  Stack stack;
  int t;
  while (1)
  {
    cout << "Input: ";
    cin >> t;
    stack.push(t);
    stack.print();
  }
  return 0;
}

