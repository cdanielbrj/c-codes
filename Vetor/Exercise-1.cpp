#include <iostream>
using namespace std;
int main ()
{
    int num[6], I, par=0, impar=0;
   
    for(I=0;I<6;I++)
    {   cout<<"Numero: ";
        cin>>num[I];
        if(num[I]%2==0)
           par++;
        if(num[I]%2!=0)
           impar++;
    }
    cout<<"\nPares: "<<par;
    cout<<"\nImpares: "<<impar;
    cout<<"\n";
   
    for(I=0;I<6;I++)
    {   if(num[I]%2==0)
          cout<<"\nNumero pares: "<<num[I];
        if(num[I]%2!=0)
           cout<<"\nNumero impares: "<<num[I];
    }
}
