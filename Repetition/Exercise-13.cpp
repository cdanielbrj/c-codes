#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, q1, q2;
    float peso, media;
    q1=0;
    q2=0;
    for (cont=1;cont<=7;cont++)
    {    cout<<"Idade: ";
        cin>>idade;
        cout<<"Peso: ";
        cin>>peso;
        cout<<"\n";
        q1 = q1 + idade;
        if (peso>90)
            q2 = q2++;
    }
    cout<<"Pessoas com mais de 90Kg: "<<q2;
    cout<<"\nMedia das idades: "<<q1/7<<" anos";
}
