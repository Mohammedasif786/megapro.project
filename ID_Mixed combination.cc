#include<iostream>
#include "insert.cc"
#include "del.cc"
using namespace std;
void adding_type(int*);
void linear(int*);
void even(int*);
//void odd(int*);
void insertion(int*);
void deletion(int*);
char x;
int ele;
int main()
{
	cout<<"How many element you want:";
	cin>>ele;
	int *var=new int[ele];
	if(!ele)
		cout<<"Try again ?";
	adding_type(var);
	cout<<"Which you want to choice insertion->(i) or deletion->(d) "<<endl;
	cin>>x;
	if(x=='i')
	insertion(var);
	else
	cout<<"Thank you !{Good by}"<<endl;
	if(x=='d')
	deletion(var);
		else
	cout<<"Thank you !{Good by}"<<endl;
		delete[] var;
	return 0;
}
void insertion(int *var)
{
   int sel;
ps:
   cout<<"Enter type of insertion :-"<<endl;
   cout<<"First-insertion"<<"\t	"<<"Middle-insertion"<<" \t"<<"End-insertion"<<"\t"<<"Quit"<<endl;        
   cout<<"	(1)"<<"	\t"<<"    (2)"<<"\t\t\t"<<"  (3)"<<"\t	"<<"(4)"<<endl;
   cin>>sel;
	switch(sel)
	{
		case 1:
			first(var,ele); //over
			break;

		case 2:
			middle(var,ele); //over
			break;

		case 3:
			end(var,ele);
			break;

		case 4:
			break;
	
		default:
			cout<<"Try again";
			goto ps;
			break;
	}
}
void deletion(int *var)
{
   int sel;
ps:
   cout<<"Enter type of insertion :-"<<endl;
   cout<<"First insertion"<<"\t		"<<"Middle insertion"<<" \t"<<"End insertion"<<"\t"<<"Quit"<<endl;        
   cout<<"	(1)"<<"	\t"<<"    (2)"<<"\t\t\t\t"<<"(3)"<<"\t"<<"(4)"<<endl;
   cin>>sel;
	switch(sel)
	{
		case 1:
			first_d(var,ele);
			break;

		case 2:
			middle_d(var,ele);
			break;

		case 3:
			end_d(var,ele);
			break;
	
		case 4:
			break;

		default:
			cout<<"Try again";
			goto ps;
			break;
	}
}
void adding_type(int *var)
{
	char option;
start:
	cout<<"Choose your option "<<endl;	
	cout<<"linear method array"<<"\t"<<"Even method array"<<"\t"<<"(Not)Odd method array"<<"\t"<<"Quit"<<endl;
	cout<<"\t"<<"(A)"<<"\t\t\t"<<"(B)"<<"\t\t\t"<<"(C)"<<"\t	"<<"(D)"<<endl;
	cin>>option;
	switch(option)
	{
		case 'A':
		linear(var);
		break;

		case 'B':
		even(var);
		break;

/*		case 'C';
		odd(var); //Incomplete
		break;*/
		
		case 'D':
		break;

		default:
		cout<<"try again"<<endl;
		goto start;
		break;
	}
}
void linear(int *var)
{
	for(int i=0;i<ele;++i)
		*(var+i)=i+1;
	for(int j=0;j<ele;++j)
		cout<<*(var+j)<<" ";
	cout<<"\n";
}
void even(int *var)
{
	for(int i=0;i<ele;++i)
		*(var+i)=i*2;
	for(int j=0;j<ele;++j)
		cout<<*(var+j)<<" ";
	cout<<"\n";
}
/*void odd(int *var)
{
	...
}*/
