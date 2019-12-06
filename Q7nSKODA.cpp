#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class engine
{
	char eng[3];
	public:
	engine()
	{}
	engine(char e[3])
	{
		//eng=new char[strlen(e)];
		//eng=e;
		strcpy(eng,e);
	}
	void display()
	{
		cout<<"Engine:"<<eng;
	}
};
class chassis
{
	char chas[4];
	public:
	chassis(){}
	chassis(char *c)
	{
		strcpy(chas,c);
	}
	void display()
	{
		cout<<"Chassis:"<<chas;
	}
};
class wheels
{
	char wheel[3];
	public:
	wheels(){}
	wheels(char *w)
	{
		strcpy(wheel,w);
	}
	void display()
	{
		cout<<"Wheels:"<<wheel;
	}
};
class cars
{
	public:
	engine e;
	chassis ch;
	wheels w;
	char car[6],ne[3],nc[3],nw[3];
	public:
	cars(){}
	cars(char *ca)
	{
		strcpy(car,ca);
		cout<<"Enter engine:";
		cin>>ne;
		e=engine(ne);
		cout<<"Enter chassis:";
		cin>>nc;
		ch=chassis(nc);
		cout<<"Enter wheels:";
		cin>>nw;
		w=wheels(nw);
	}
	void display1()
	{
		cout<<"Car:"<<car<<endl;
		e.display();cout<<"\t";
		ch.display();cout<<"\t";
		w.display();cout<<"\t";
		/*cout<<"Engine:"<<ne<<endl;
		cout<<"Chassis:"<<nc<<endl;
		cout<<"Wheels:"<<nw<<endl;*/
	}
};
class person
{
	public:
	char pname[6], cname[6];
	int i,j,n;
	cars c[4];
	public:
	person(){}
	person(char *p)
	{
		i=0;
		strcpy(pname,p);
	}
	void assign()
	{
		cout<<"\nEnter car name:";
		cin>>cname;
		c[i]=cars(cname);
		i++;
	}
	void display()
	{
	       //	i=n;
		cout<<"Person "<<pname<<" has cars:"<<endl;
		for(j=0;j<i;j++)
		{
			c[j].display1();
		}
	}
};
int main()
{
	int i,j;
	char cname[6];
	//clrscr();
	person p[10];
	/*cars C;
	cout<<"Enter car name :";
	cin>>cname;
	C=cars(cname);
	C.display1();*/
	p[0]=person("ABC");
	p[0].assign();
	p[0].assign();
	p[0].display();
	p[1]=person("XYZ");
	p[1].assign();
	p[1].display();
	p[2]=person("LMN");
	p[2].assign();
	p[2].display();
	//p.assign();
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(strcmp(p[i].c[j].car,"Skoda")==0)
			{
				cout<<p[i].pname;
			}
		}
		cout<<endl;
	}
          return 0;
	//getch();
}
