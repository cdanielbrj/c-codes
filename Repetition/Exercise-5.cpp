#include <iostream>
using namespace std;
int main ()
{
    char nome[41];
    int cont;
    float valor;
    
    for (cont=1;cont<=15;cont++)
    {   cout<<"Nome do Cliente: ";
        cin>>nome;
        cout<<"Valor em compras: ";
        cin>>valor;
        
        if (valor<1000)
            cout<<"Desconto: $"<<valor*0.10;
            cout<<"\n";
        if (valor>1000)
            cout<<"Desconto: $"<<valor*0.15;
            cout<<"\n";
    }
}
