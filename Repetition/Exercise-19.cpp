#include <iostream>
using namespace std;
int main ()
{
    int par, quant;
    float val, ac;
    
    cout<<"Valor do carro: ";
    cin>>val;
    cout<<"\n";
    ac = 0.03;
    for (par=1;par<=10;par++)
    {   quant = 6*par;
        cout<<"Quantidade de Parcelas: x"<<quant<<" vezes";
        cout<<"\nValor da Parcela: $"<<val/quant;
        cout<<"\nValor final: $"<<val+(val*ac)<<"\n";
        cout<<"\n";
        ac=ac+0.03;
    }
    cout<<"Valor a vista: $"<<val-(val*0.20);
}
