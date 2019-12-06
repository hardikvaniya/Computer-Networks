#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
class Product
{
    char name[50];
    int id;
    public:
        void saveinfile(ofstream &fout)
        {
            fout<<name<<"\n";
            fout<<id<<"\n";
        }
        void readff(ifstream &fin)
        {
                fin>>name;
                fin>>id;
        }
        void setdata()
        {
            cout<<"Enter the name of the Product : ";
            cin>>name;
            cout<<"Enter the id of Product : ";
            cin>>id;
        }
        void insertdata()
        {
            cout<<"Enter the data,name to be inserted at pos 2:";
            cin>>name;
            cout<<"Enter the data,ID to be inserted at pos 2:";
            cin>>id;
        }
        void printdata()
        {
            cout<<"The name of the product is : "<<name<<endl;
            cout<<"The Id of the product is : "<<id<<endl;
        }
};
int main()
{
    vector<Product> v;
    Product rp[3];
    int pos=2;
    ofstream fout;
    ifstream fin;
    fout.open("Product data.txt");
    for(int i=0;i<3;i++)
    {
        v.push_back(Product());
        v[i].setdata();
        v[i].saveinfile(fout);
    }
    fout.close();
    cout<<"Final size : "<<v.size()<<endl;
    fin.open("Product data.txt");
    for(int i=0;i<3;i++)
    {
        rp[i].readff(fin);
        rp[i].printdata();
    }
    fin.close();
    Product p;
    p.insertdata();
    v.insert(v.begin()+1,p);
    v.erase(v.begin()+2);
    v.pop_back();
    cout<<"after inserting at pos2 and deleting 3rd n 4th:"<<endl;
        for(int i=0;i<v.size();i++)
    {

        v[i].printdata();

    }
    return 0;
}
