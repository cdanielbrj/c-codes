#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, q1, q2;
    float peso, alt, m1;
    q1=0;
    q2=0;
    m1=0;
    for (cont=1;cont<=10;cont++)
    {   cout<<"Idade: ";
        cin>>idade;
        cout<<"Peso: ";
        cin>>peso;
        cout<<"Altura: ";
        cin>>alt;
        cout<<"\n";
        m1=m1+idade;
        if ((peso>90)&&(alt<1.50))
            q1=q1++;
        if ((alt>1.90)&&(idade>=10)&&(idade<=30))
            q2=q2++;
    }
    cout<<"Media das idades: "<<m1;
    cout<<"\nMedidas unicas: "<<q1;
    cout<<"\nPercentagem específica: %"<<(q2*100)/10;
}
