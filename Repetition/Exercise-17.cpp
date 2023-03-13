#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, opt, pessoa, pessoa1;
    float media, media1, media2;
   
    cont=1;
    media=0;
    media1=0;
    media2=0;
    pessoa=0;
    pessoa1=1;
   
    cout<<"Sexo: ";
    cout<<"\n - Masculino: (1)";
    cout<<"\n - Feminino: (2)";
   
    while (cont<=4)
    {   cout<<"\nSexo: ";
        cin>>opt;
        cout<<"\nIdade: ";
        cin>>idade;
        media = media + idade;
       
        if (opt==1)
        {   pessoa=pessoa+1;
            media1=media1+idade;
        }
        if (opt==2)
        {   pessoa1=pessoa1+1;
            media2=media2+idade;
        }
        cont=cont+1;
    }
    cout<<"\nA idade média: "<<media/4;
    cout<<"\nA idade média masculina: "<<media1/pessoa;
    cout<<"\nA idade média feminina: "<<media2/pessoa1;
}
