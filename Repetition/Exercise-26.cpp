#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, q, soma;
    q=0;
    soma=0;
    cout<<"Idade: ";
    cin>>idade;
    soma=soma+idade;
    q++;
    for(cont=1;idade>0;cont++)
    {   cout<<"Idade: ";
        cin>>idade;
        soma=soma+idade;
        q++;
        if(idade==0)
           q--;
    }
    cout<<"Media: "<<soma/q;
}
