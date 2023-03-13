#include <iostream>
using namespace std;
int main ()
{
    float valor, ing;
    ing=120.00;
    
    for (valor=5.0;valor>=1.0;valor=valor-0.5)
    {   cout<<"\nValor do ingresso: "<<valor;
        cout<<"\nIngressos vendidos: "<<ing;
        cout<<"\nLucro obtido: "<<(ing*valor)-200.00;
        cout<<"\n";
        ing=ing+26.0;    
    }
}
