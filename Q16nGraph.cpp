#include<vector>
#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	vector<vector<int> > graph;
	int row,col,i,j,value;
	cout<<"ENter number of rows: ";
	cin>>row;
	cout<<"\nEnter number of columns: ";
	cin>>col;
	
	// matrix;
	ofstream fout;
	ifstream fin;
	fout.open("16.txt",ios::binary);
	
	for(i=0;i<row;i++)
	{
		vector<int> row;
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter 1 if path betwn node "<<i<<" and "<<j<<" exist\n";
			cin>>value;
			row.push_back(value);
			fout<<value;
		}	
		graph.push_back(row);
		
	}
	
	for(i=0;i<row;i++)
	{
		cout<<"\nNeighbours of node "<<i+1<<" are : ";
		for(j=0;j<col;j++)
		{
			if(graph[i][j]==1)
			cout<<" ->"<<j;
		}
	}
	
/*	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		//	cout<<"\nEnter 1 if path betwn node "<<i<<" and "<<j<<" exist\n";
			cout<<"\t"<<graph[i][j];
	//		fout<<"\t"<<graph[i][j];	
		}	
		cout<<endl;
	//	fout<<endl;
	}*/
	
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		//	cout<<"\nEnter 1 if path betwn node "<<i<<" and "<<j<<" exist\n";
			fin>>graph[i][j];	
			cout<<"\t"<<graph[i][j];
		}
			
		cout<<endl;
	}
}
