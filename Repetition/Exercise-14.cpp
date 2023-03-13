#include <iostream>
using namespace std;
int main ()
{
    int idade, opt1, opt2, pessoa, pessoa1, pessoa2, pessoa3, contador;
    float alt, peso, media;
   
    pessoa=0;
    pessoa1=0;
    pessoa2=0;
    pessoa3=0;
    media=0;
    contador=1;
   
    cout<<"Para olhos de cor: ";
    cout<<"\n  - Azul: (1)";
    cout<<"\n  - Preto: (2)";
    cout<<"\n  - Verde: (3)";
    cout<<"\n  - Castanho: (4)";
    cout<<"\n";
    cout<<"\nPara cabelos de cor: ";
    cout<<"\n  - Preto: (1)";
    cout<<"\n  - Castanho: (2)";
    cout<<"\n  - Louro: (3)";
    cout<<"\n  - Ruivo: (4)";
    cout<<"\n";
   
    while(contador<=20)
    {   cout<<"\nDigite a sua idade: ";
        cin>>idade;
        cout<<"Digite o peso: ";
        cin>>peso;
        cout<<"Digite a sua altura: ";
        cin>>alt;
        cout<<"Digite a cor dos olhos: ";
        cin>>opt1;
        cout<<"Digite a cor dos cabelos: ";
        cin>>opt2;
       
    if ((idade>50)&&(peso<60))
       pessoa = pessoa + 1;
    if (alt<1.5)
    {  pessoa1 = pessoa1 + 1;
       media = idade/pessoa1;
    }
    if(opt1==1)
       pessoa2 =pessoa2+1;
    if((opt2==4)&&(opt1!=1))
       pessoa3=pessoa3+1;
       contador=contador+1;
    }  
    cout<<"Quantidade de pessoas: "<<pessoa;
    cout<<"A média das idades: "<<media;
    cout<<"A percentagem: "<<pessoa2*(100/20);
    cout<<"Quantidade de pessoas: "<<pessoa3;
}
