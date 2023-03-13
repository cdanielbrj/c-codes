#include <iostream>
using namespace std;
int main ()
{
    int idade, cont;
    int p1, p2, p3, p4, p5;
   
    p1 = 0;
    p2 = 0;
    p3 = 0;
    p4 = 0;
    p5 = 0;
   
    cont = 1;
   
    while (cont<=15)
    {   cout<<"\nIdade: ";
        cin>>idade;
       
        if (idade<=15)
        {  cout<<"Primeira faixa etaria\n";
           p1 = p1 + 1;
        }
        if ((idade>=16)&&(idade<=30))
        {  cout<<"Segunda faixa etaria\n";
           p2 = p2 + 1;
        }
        if ((idade>=31)&&(idade<=45))
        {  cout<<"Terceira faixa etaria\n";
           p3 = p3 + 1;
        }
        if ((idade>=46)&&(idade<=60))
        {  cout<<"Quarta faixa etaria\n";
           p4 = p4 + 1;
        }
        if (idade>=61)
        {  cout<<"Quinta faixa etaria\n";
           p5 = p5 + 1;
        }
        cont = cont + 1;
    }
    cout<<"\n";
    cout<<"\nTotal na primeira categoria: "<<p1;
    cout<<"\nTotal na segunda categoria: "<<p2;
    cout<<"\nTotal na terceira categoria: "<<p3;
    cout<<"\nTotal na quarta categoria: "<<p4;
    cout<<"\nTotal na quinta categoria: "<<p5;
    cout<<"\n";
    cout<<"\nPrimeira categoria: %"<<p1*(100/15);
    cout<<"\nQuinta categoria: %"<<p5*(100/15);
}
