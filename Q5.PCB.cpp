#include <iostream>
using namespace std;

class IC
{

  int number;
  float length, width;

public:
  IC()
  {
  }
  void set(int a, float b, float c)
  {
    number = a;
    length = b;
    width = c;
  }
  float perimeter()
  {
    return (2 * (length + width));
  }
  float area()
  {
    return length * width;
  }

  void show()
  {
    cout << "No. of ICs " << number << endl;
    cout << "Length " << length << endl;
    cout << "Width " << width << endl;
  }
  int sameArea(IC c1)
  {
    return this->area() == c1.area() ? 1 : 0;
  }
};

int main()
{
  IC ic1, ic2;
  ic1.set(1, 5, 2.5);
  ic2.set(2, 5, 18.9);
  if (ic1.sameArea(ic2))
    cout << "Same area\n";
  else
    cout << "different area\n";
  return 0;
}
