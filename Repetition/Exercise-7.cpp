#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, pessoa;
    cont=1;
    pessoa = 0;
   
    while(cont<=10)
    {  cout<<"Idade: ";
       cin>>idade;
       if (idade>=18)
          pessoa = pessoa + 1;
       cont=cont+1;
    }
    cout<<"Pessoas Maiores de Idade: "<<pessoa;
}
