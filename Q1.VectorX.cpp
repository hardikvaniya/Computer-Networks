#include<bits/stdc++.h>
#include<math.h>

#define N 3

using namespace std;

class Vector
{
  vector<float> array;

public:

   void creatvec(int n)
     {
       
       array.push_back(n);
     }

   void printvec()
     {
      for (int i=0;i<N;i++)
         {
            cout<<array[i]<<" ";
          }
         cout<<endl;
    }
   void scalvec(int x)
    {
      cout<<"before scaling:\n";
       printvec();
      cout<<"after scaling:\n";
        for(int i =0;i<N;i++)
         {
            array[i]=array[i]*x;
         }
        printvec();
    }
   float magnitudevec()
     {
       float y=0;
       for(int i =0;i<N;i++)
        {
           y=y+pow(array[i],2);
         }
        return sqrt(y);
       }
    //cout<<"Magnitude of vector is:"<<y;
   };

int main()
 {
  Vector V1,V2;

  int t,n;
  // float x,y;
  cout<<"Enter value of first vector:\n";
  for (int i=0;i<N;i++)
   { 
     cin>>t;
     V1.creatvec(t);
   }
   cout<<"Enter values of second vector:\n";
  for (int i=0;i<N;i++)
  {
       cin>>t;
       V2.creatvec(t);
  }
  cout<<"Enter scaling value:\n";
  cin>>n;
  V1.scalvec(n);
  V2.scalvec(n);
 float o=V1.magnitudevec();
  float p=V2.magnitudevec();
  cout<<"Magnitude of First vector:"<<o<<endl;
  cout<<"Magnitude of second vector:"<<p<<endl;  
 return 0;
}
     
