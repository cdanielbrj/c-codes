#include <iostream>
using namespace std;
int main ()
{
int i, num[4];


for (i=0;i<4;i++)
{     cout<<"Número: ";
      cin>>num[i];
}
for (i=0;i<4;i++)
     if (num[i]>0)
         cout<<"\t"<<num[i];
}
