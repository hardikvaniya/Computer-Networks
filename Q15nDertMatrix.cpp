#include<stdio.h>
#include<iostream>

using namespace std;
template <typename T>
class array
{
	T a[3][3],s;
	public:
		array(T ar[3][3]);
		T determinant();
		void print();
		
};
template <typename T>
array<T>::array(T ar[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=ar[i][j];
		}
	}
}

template <typename T>
T array<T>::determinant()
{
	return(a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]));
}
int main()
{
	int arr[3][3];
	int i,j,row,col;
        cout<<"Enter Element of Matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	array<int> obj(arr);
	//obj.print();
	cout<<"\n"<<obj.determinant();
	return 0;
}
