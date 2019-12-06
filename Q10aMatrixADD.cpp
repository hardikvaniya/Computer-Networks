
 #include<stdio.h>
 #include <iostream>
using namespace std;
class Matrix
{

  public:
    int a[100][100], i, j, c, r;
    void define()
    {
        cout << "Enter number of rows: ";
        cin >> r;

        cout << "Enter number of columns: ";
        cin >> c;
    }
    void set()
    {

        cout << endl
             << "Enter elements of matrix: " << endl;

        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }
        }
    }
    Matrix scale(int u)
    {
        // Matrix z;
        int i, j;
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                this->a[i][j] *= u;
            }
        }
        return *this;
    }
    Matrix add(Matrix t)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                t.a[i][j] = a[i][j] + t.a[i][j];
            }
        }
        return t;
    }

    void display()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int x, u;

    Matrix a, b, r1, r2, c, r;
    ///clrscr();
    cout << "Setting for a : " << endl;
    a.define();
    a.set();

    cout << "\nChoose Option from the Menu:";
    cout << "\n1. Matrix Addition";
    cout << "\n2. Matrix Scaling";
    cout << "\nEnter Your Choice: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Setting for b : " << endl;
        b.define();
        b.set();
        if (a.r == b.r && a.c == b.c)
        {
            r1 = a.add(b);
            r1.display();
        }
        else
        {
            cout << "\nBoth Matrix are of different order" << endl;
        }
        break;

    case 2:
        cout << "Enter Scaling Factor" << endl;
        cin >> u;
        r2 = a.scale(u);
        r2.display();
        break;
    }

    return 0;
}
