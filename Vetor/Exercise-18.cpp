#include <iostream>
using namespace std;
int main ()
{
int i, num [3], ma=0, me=10000, quant=0, map=0, mep=0;


for (i=0;i<3;i++)
{   cout<<"Número: ";
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
cout<<"Maior número: "<<ma<<"\tPosição: "<<map;
cout<<"\nMenor número: "<<me<<"\tPosição: "<<mep;
}
