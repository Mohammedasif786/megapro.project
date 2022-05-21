#include<iostream>
using namespace std;
void first(int *var,int ele)
{
	int key;
	cout<<"Enter the number to stored in array: ";
	cin>>key;
	for(int i=ele;i>=0;--i)	
	{
		*(var+i+1)=*(var+i);
		if(i==0)
			*(var+i)=key;
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele;++j)
		cout<<*(var+j)<<"|";
	cout<<"\n";
}
void middle(int *var,int ele)
{
	int key,index;
	cout<<"Enter number of key and index  which you want to add!: ";
	cin>>index>>key;
	for(int i=index;i<ele;++i)
	{
		if(i==index){
			*(var+i)=key;
			break;
		}
		else
		*(var+i+1)=*(var+i);
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele;++j)
		cout<<*(var+j)<<"|";
	cout<<"\n";
}
void end(int *var,int ele)
{
	int key;
	cout<<"Enter number of key which you want to add!: ";
	cin>>key;
	for(int i=0;i<=ele;++i)
	{
		if(i==ele-1)
			*(var+i)=key;
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele;++j)
		cout<<*(var+j)<<"|";
	cout<<"\n";
}
