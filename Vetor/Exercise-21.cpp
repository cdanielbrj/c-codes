#include <iostream>
using namespace std;
int main ()
{
int i, num1[4], num2 [4];


for (i=0;i<4;i++)
{     cout<<"N�mero: ";
      cin>>num1[i];
      num2[i]=num1[i];
      if (num1[i]==0)
num2[i]=1;
}
cout<<"Rela��o dos n�meros\n";
for (i=0;i<4;i++)
      cout<<"\t"<<num1[i];
      cout<<"\n";
for (i=0;i<4;i++)
      cout<<"\t"<<num2[i];
}
