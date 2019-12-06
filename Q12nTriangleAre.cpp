#include<iostream>
#include<math.h>
using namespace std;
const float pi=3.14;
float area(float n,float b,float h)
{
float ar;
ar=n*b*h;
return ar;
}
float area(float r)
{
float ar;
ar=sqrt(3)/4*r*r;
return ar;
}
float area(float l,float b)
{
float ar;
ar=b/4*sqrt(4*l*l-b*b);
return ar;
}
int main()
{
float b,h,r,l;
float result;
//clrscr();
cout<<"\nEnter the Base & Height of Triangle: \n";
cin>>b>>h;
result=area(0.5,b,h);
cout<<"\nArea of Triangle: "<<result<<endl;
cout<<"\nEnter length of side: \n";
cin>>r;
result=area(r);
cout<<"\nArea of equilateral triangle: "<<result<<endl;
cout<<"\nEnter the Length of side1 & side2: \n";
cin>>l>>b;
result=area(l,b);
cout<<"\nArea of isosceles triangle: "<<result<<endl;
return 0;
}
