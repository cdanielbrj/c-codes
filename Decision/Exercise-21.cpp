#include <iostream>
using namespace std;
int main ()
{
    float p, c;
    
    cout<<"Preco do produto: ";
    cin>>p;
    cout<<"Codigo de origem: ";
    cin>>c;
    
    if (c==1)
        cout<<"Procedencia: Sul";
    if (c==2)
        cout<<"Procedencia: Norte";
    if (c==3)
        cout<<"Procedencia: Leste";
    if (c==4)
        cout<<"Procedencia: Oeste";
        
    if ((c==5)||(c==6))
        cout<<"Procedencia: Nordeste";
    if ((c==7)||(c==8)||(c==9))
        cout<<"Procedencia: Sudeste";
    if ((c>=10)&&(c<=20))
        cout<<"Procedencia: Centro-Oeste";
    if ((c>=21)&&(c<=30))
        cout<<"Procedencia: Nordeste";
}
