#include <iostream>
using namespace std;
int main ()
{
    int num[15], I, quant=0;
   
    for(I=0;I<15;I++)
    {   cout<<"\nN�mero: ";
        cin>>num[I];
        quant++;
        if(num[I]==30)
           cout<<"Posi��o: "<<quant;
    }
}
