#include <iostream>
using namespace std;
int main ()
{
    int opt, cont;
    float v, p, tot1, tot2;
   
    cont = 1;
    tot1 = 0;
    tot2 = 0;
   
    cout<<" - Transa��es � Vista = (1)";
    cout<<"\n - Transa��es � Prazo = (2)";
    cout<<"\n";
   
    while (cont<=15)
    {
       cout<<"\nTipo de Transa��o: ";
       cin>>opt;


       if (opt==1)
       {  cout<<"Compras � Vista: ";
          cin>>v;
          tot1 = tot1 + v;
       }
       if (opt==2)
       {  cout<<"Compras � Prazo: ";
          cin>>p;
          tot2 = tot2 + p;
       }
       cont = cont+1;
    }
    cout<<"Valor total � vista: $"<<tot1;
    cout<<"\nValor total � prazo: $"<<tot2;
    cout<<"\nValor Total: $"<<tot1+tot2;
    cout<<"\nPrimeia presta��o: $"<<tot2/3;
}
