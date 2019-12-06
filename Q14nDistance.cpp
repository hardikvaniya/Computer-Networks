#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;
template<class T>
double distance(T *a,T *b)
{
	return(sqrt(pow((a[0]-b[0]),2)+pow((a[1]-b[1]),2)));
}
int main()
{
	int a[2],b[2],i;
	double ans;
	cout<<"Enter the coordinate for first point:"<<endl;
	for(i=0;i<2;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the coordinate for second point:"<<endl;
	for(i=0;i<2;i++)
	{
		cin>>b[i];
	}
	ans=distance(a,b);
	cout<<"Distance between two points is:"<<ans<<endl;
	return 0;
}
