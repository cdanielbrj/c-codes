#include <iostream>
using namespace std;
int main ()
{
int i, num [3], ma=0, me=10000, quant=0, map=0, mep=0;


for (i=0;i<3;i++)
{   cout<<"N�mero: ";
     cin>>num[i];
     quant++;


     if (num[i]>ma)
     {    ma=num[i];
          map=quant;
      }
     if (num[i]<me)
     {   me=num[i];
         mep=quant;
      }
}
cout<<"Maior n�mero: "<<ma<<"\tPosi��o: "<<map;
cout<<"\nMenor n�mero: "<<me<<"\tPosi��o: "<<mep;
}
