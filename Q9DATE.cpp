#include <iostream>
using namespace std;

class Date
{
  int DD, MM, YYYY;

public:
  Date(int d = 1, int m = 1, int y = 1111)
  {
    DD = d;
    MM = m;
    YYYY = y;
  }
  void addDate(int days)
  {
    DD = DD + days;
    while (DD > 31)
    {
      if ((MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12) && DD > 31)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 31)
          DD = DD - 31;
      }
      else if ((MM == 4 || MM == 6 || MM == 9 || MM == 11) && DD > 30)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 30)
          DD = DD - 30;
      }
      else if ((MM == 2) and DD > 28)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 28)
          DD = DD - 28;
      }
    }
  }
  void subtractDate(int days)
  {
    DD = DD - days;
    while (DD < 0)
    {
      if ((MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12) && DD <= 0)
      {
        MM--;
        YYYY--;
        if (MM < 1)
          MM = 12;
        if (DD <= 0)
          DD = 31 + DD;
      }
      else if ((MM == 4 || MM == 6 || MM == 9 || MM == 11) && DD <= 0)
      {
        MM--;
        YYYY--;
        if (MM < 1)
          MM = 12;
        if (DD <= 0)
          DD = 30 + DD;
      }
      else if ((MM == 2) and DD <= 0)
      {
        MM--;
        YYYY--;
        if (MM < 1)
          MM = 12;
        if (DD <= 0)
          DD = 28 + DD;
      }
    }
  }
  void PrintDate()
  {
    cout << DD << "/" << MM << "/" << YYYY << endl;
  }

  void main_menu()
  {
    int ch;
    cout << "Press 1. >Add to a date\n";
    cout << "Press 2. >Subtract from a date\n";
    cout << "Press 3. >Duration between two dates\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
      int n;
      cout << "Input base date\n";
       cin >> DD >> MM >> YYYY;
    //  scanf("%d/%d/%d", &DD, &MM, &YYYY);
      cout << "how many days you wanna add?\n";
      cin >> n;
      addDate(n);
      PrintDate();

    case 2:
      cout << "Input base date\n";
      cin >> DD >> MM >> YYYY;
    //  scanf("%d/%d/%d", &DD, &MM, &YYYY);
      cout << "how many days you wanna subtract?\n";
      cin >> n;
      subtractDate(n);
      PrintDate();
    }
  }
};

int main()
{
  Date d1;
  d1.main_menu();

  return 0;
}

