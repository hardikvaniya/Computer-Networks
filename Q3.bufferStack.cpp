#include <bits/stdc++.h>
using namespace std;
#define SIZE 10 // Stack SIZE is limited to 10 elements

class Stack
{
  int unique;
  int _array1[SIZE];
  int topOfStack;
  static int _buffer[2 * SIZE];

public:
  Stack()
  {
    topOfStack = -1;
  }

  void subPrint(int arr[])
  {
    for (int i = topOfStack; i >= 0; i--)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  ~Stack()
  {
    topOfStack = SIZE;
    cout << "Destructor invoked: \n";
    printBuffer();
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
  int peek(int arr[])
  {
    int k = arr[topOfStack];
    pop();
    return k;
  }
  void resetStack()
  {
    if (topOfStack == SIZE - 1 )
    {
      cout << "Contents of buffer:: ";
      for (int i = SIZE - 1; i >= 0; i--)
      {
        int l = 0;
        _buffer[l++] = _array1[i];
        cout << _buffer[l - 1] << " ";
      }
      cout << endl;
      // topOfStack = -1;
    }
  }
  void buffer_resetStack()
  {
    if (topOfStack == SIZE - 1)
      for (int i = topOfStack; i >= 0; i--)
        _buffer[i] = peek(_array1);
  }
  void print()
  {
    if (topOfStack < SIZE - 1)
    {
      cout << "Stack1:: ";
      subPrint(_array1);
    }
    else if (topOfStack == SIZE - 1)
    {
      cout << "Stack1 is now full\nStack1::";
      subPrint(_array1);
      cout << "elements moved to buffer\n";
      buffer_resetStack();
      return;
    }
  }
  void printBuffer()
  {
    for (int i = 0; i < topOfStack; i++)
    {
      cout << _buffer[i] << " ";
    }
    cout << endl;
  }
};
int Stack::_buffer[2 * SIZE];
int main()
{
  Stack stack;
  int t;
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Input: ";
    cin >> t;
    stack.push(t);
    stack.print();
  }
  return 0;
}
