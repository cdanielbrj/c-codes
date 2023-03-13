#include <iostream>
using namespace std;
int main ()
{
    int i, num[4], par[4], impar[4];


    for(i=0;i<4;i++)
    {   cout<<"Número: ";
        cin>>num[i];
    }
    cout<<"Números pares: ";
    for(i=0;i<4;i++)
    {    if(num[i]%2==0)
         {  par[i]=num[i];
            cout<<"\n\t"<<par[i];
         }
    }
    cout<<"\nNúmeros ímpares: ";
    for(i=0;i<4;i++)
    {    if(num[i]%2!=0)
         {  impar[i]=num[i];
            cout<<"\n\t"<<impar[i];
         }
    }
}
