#include <iostream>
using namespace std;
int main ()
{
    int cod;
    float pa, desc;
    
    cout<<"Código do produto: ";
    cin>>cod;
    cout<<"Preço atual: ";
    cin>>pa;
    
    if (pa<=30.00)
        cout<<"Sem desconto.";
    
    if ((pa>30.00)&&(pa<=100.00))
    {    desc = pa*0.10;
        cout<<"Valor do desconto: "<<desc;
        cout<<"\nNovo preço: "<<pa-desc;
    }
    if (pa>100.00)
    {    desc = pa*0.15;
        cout<<"Valor do desconto: "<<desc;
        cout<<"\nNovo preço: "<<pa-desc;
    }
}
