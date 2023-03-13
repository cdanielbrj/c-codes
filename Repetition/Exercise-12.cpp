#include <iostream>
using namespace std;
int main ()
{
    int cont, idade;
    int P, Q1, Q2;
    float alt, peso, media;
    
    Q1=0;
    Q2=0;
    P=0;
    cont=1;
    media=0;
   
    while(cont<=25)
    {   cout<<"Idade: ";
        cin>>idade;
        cout<<"Altura: ";
        cin>>alt;
        cout<<"Peso: ";
        cin>>peso;
        if(idade>50)
            P=P+1;
        if((idade>=10)&&(idade<=20))
            Q1=Q1+1;
            media=alt/Q1;
        if(peso<40)
            Q2=Q2+1;
            cont=cont+1;
   }
   cout<<"Pessoas com mais de 50 anos: "<<P;
   cout<<"Media das Alturas: "<<media;
   cout<<"Percentagem das pessoas com menos de 40kg: "<<Q2*(100/25);
}
