
#include <iostream>
#include <string>
using namespace std;
void fix();
int main()
{
    fix();
    return 0;
}
void fix()
{
    int count=0;
    int ok,ko;
   int var[] ={
   1, 2, 2, 3
   };
   for (int i : var) {
       ++count;
   }
   for(int j=0;j<count-1;++j){ 
       if(var[j]<var[j+1])     
       ok=false;  
   }
   for(int i=0;i<count-1;++i)
   {
       if(var[i]>var[i+1])
        ko=false; 
   }
   if(ok || ko)
   cout<<"Yes";
   else
    cout<<"No";
}