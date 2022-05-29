#include<time.h>
#include<cstdio>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	char var2[26]={	
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	};
	int x,r;
		cout<<"Enter the length of passowrd :";
		cin>>x;
		for(int i=0;i<26;++i)
		{
		 r=rand()%26;
 		 var2[i]+=r;
		}
		for(int i=0;i<x-3;++i){
		cout<<var2[i];
			if(i==0 || i==2 ||i==4)
		cout<<0+rand()%9;
	}
		cout<<getchar()+getchar();
	return 0;
							
}
