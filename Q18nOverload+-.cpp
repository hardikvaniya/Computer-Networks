#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class String
{
	char s[100];
	int size;
	public:
	void get()
	{
	    cout<<"ENter string 1: ";
		cin>>s;
	}
	void show()
	{
		cout<<"You entered: "<<s;
	
	}
	String operator +(String obj)
    {
	
	String str;
    strcat(s,obj.s);
    strcpy(str.s,s);
    return(str);
    }
	String operator -(String obj)
	{
		String st;
		int s1,s2,i,j,k=0,f=0;
		s1=strlen(s);
		cout<<s1;
		s2=strlen(obj.s);
		for(i=0;i<s1;i++)
		{
		       f=0;
			for(j=0;j<s2;j++)
			{
				if(s[i]==obj.s[j])
				{
					f++;
					break;
				}
			}
			if(f==0)
			{
				
				st.s[k]=s[i];
				k++;	
			}
		
		}
		return(st);
		
	}
};

int main()
{
	String S1,S2,S3,S4;
	//char mg1[10],mg2[10];
		
		S1.get();
		S2.get();
		S4=S2-S1;
		S4.show();
		S3=S1+S2;
		S3.show();
		
return 0;
}
