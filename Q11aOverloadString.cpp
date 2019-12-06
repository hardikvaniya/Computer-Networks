#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void get()
                {
                        cout<<"\n Enter String:";
                        cin>>str;
                }
                void display()
                {
                        cout<<str;
                }
                String operator+(String x)
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
                int operator ==(String s)
                {
                        if(!strcmp(str,s.str))
                        return 1;
                        else
                        return 0;
                }
};
int main()
{
        String str1, str2, str3;

        str1.get();
        str2.get();

        if(str1==str2)
        {
        cout<<"\nStrings are Equal";
        }
        else
        {
        cout<<"\nStrings are Not Equal\n";
        }

        str3=str1+str2;
        cout<<"\n\n Concatenated String is:  ";
        str3.display();

        return 0;
}
