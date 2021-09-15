#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter a number :");
    scanf("%d %d",&x,&y);
    void add(int,int);
    void reverse(int ,int);
    void isEven(int,int);
    void swap(int,int);
    add(x,y);
    reverse(x,y);
    isEven(x,y);
    swap(x,y);
}
void reverse(int a,int b)
{
    a--;
    b--;
    printf("\n%d %d is the reverse:",a,b);
}
void isEven(int a,int b)
{
    int c;
    c=a+b;
    if(c!=30)
    printf("Problem in this pogram ?");
    else if(c%2==0)
    printf("\nOdd\n",c);
    else
    printf("\nEven\n",c);
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d %d is the swap",a,b);
}
void add(int a,int b)
{
    int c;
    c=a+b;
   printf("\n%d is the sum:",c);
}