#include <iostream>
using namespace std;
int main ()
{
    int i, quant=0, soma=0;
    float num[4];
   
    for(i=0;i<4;i++)
    {   cout<<"N�mero: ";
        cin>>num[i];
        if(num[i]<0)
           quant++;
        if(num[i]>0)
           soma+=num[i];
    }
    cout<<"N�meros negativos: "<<quant;
    cout<<"\nSoma dos positivos: "<<soma;
}
