#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<fstream>

using namespace std;

class product
{
    int id;
    char name[20];
public:

    void get()
    {
        cout<<"Enter product id : ";
        cin>>id;
        cout<<"Enter product name : ";
        cin>>name;
        store();
    }
    void print()
    {
        cout<<"Product id: "<<this->id<<endl;
        cout<<"Product name: "<<this->name<<endl;
    }

    void store()
    {
        fstream file;
        file.open("vector.txt",ios::binary|ios::app);
        file.write((char*)this,sizeof(*this));
        file.close();
    }

    void retrieve()
    {   cout<<"Retrive of product:"<<endl;
        ifstream file;
        file.open("vector.txt",ios::binary);
        while(file.read((char*)this,sizeof(*this)))
            print();
        file.close();
    }
};

int main()
{
    product p5;
    vector <product>p;
    vector <product>::iterator j;
    product p1,p2,p3;
    p1.get();
    p2.get();
    p3.get();
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p1.store();
    p2.store();
    p3.store();
 /*   for(j=p.begin();j!=p.end();j++)
	{
		p5=*j;
		p5.print();
		p5.retrieve();
	}*/
    p1.retrieve();
}
