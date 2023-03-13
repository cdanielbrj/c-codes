#include <iostream>
using namespace std;
int main ()
{
    int cod, quant;
    float desc, uni;
    
    cout<<"Codigo do produto: ";
    cin>>cod;
    cout<<"Quantidade comprada: ";
    cin>>quant;
    //Tabela 1
    if ((cod>=1)&&(cod<=10))
    {    uni = quant*10;
        cout<<"Valor unitario: 10";
    }
    if ((cod>=11)&&(cod<=20))
    {    uni = quant*15;
        cout<<"Valor unitario: 15";
    }
    if ((cod>=21)&&(cod<=30))
    {    uni = quant*20;
        cout<<"Valor unitario: 20";
    }
    if ((cod>=31)&&(cod<=40))
    {    uni = quant*30;
        cout<<"Valor unitario: 30";
    }
    cout<<"\nPreco total: "<<uni;
    
    
    if (uni<250.00)
    {    desc = uni*0.05;
        cout<<"\nDesconto: "<<desc;
    }
    if ((uni>=250.00)&&(uni<500.00))
    {    desc = uni*0.10;
        cout<<"\nDesconto: "<<desc;
    }
    if (uni>500.00)
    {    desc = uni*0.15;
        cout<<"\nDesconto: "<<desc;
    }
    cout<<"\nPreco final: "<<uni-desc;
}
