#include <iostream>
using namespace std;
int main ()
{
    float num, calc, soma, cont;
    
    soma=0;
    
    cout<<"Numero: ";
    cin>>num;
    
    for (cont=1;cont<=num;cont++)
    {    calc = 1/cont;
        soma = soma+calc;
    }
    cout<<"Resultado: "<<soma;
}
