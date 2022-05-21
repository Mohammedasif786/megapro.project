#include<iostream>
using namespace std;
void first_d(int *var,int ele)
{
	for(int i=0;i<ele;++i)
	{
		if(i==0)
			*(var+i)=0;
		*(var+i)=*(var+i+1);
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele;++j)
	cout<<*(var+j)<<"|";
	cout<<"\n";
}

void middle_d(int *var,int ele)
{
	int key;
	cout<<"Enter number of key which you want to delete!: ";
	cin>>key;
	for(int i=key;i!=ele;++i)
	{
		if(i==key)
			*(var+i)=0;
		*(var+i)=*(var+i+1);
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele-1;++j)
	cout<<*(var+j)<<"|";
	cout<<"\n";

}
void end_d(int *var,int ele)
{
	for(int i=0;i<ele;++i)
	{
		if(i==ele-1)
			*(var+i)=0;
	}
	cout<<"Result--: "<<endl;
	for(int j=0;j<ele;++j)
	cout<<*(var+j)<<"|";
	cout<<"\n";
}
