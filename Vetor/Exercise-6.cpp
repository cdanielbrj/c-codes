#include <iostream>
using namespace std;
int main ()
{
    float tot[10], com[10], rec[10], soma=0, ma=0, me=5000;
    char nome[10][21];
    int i, quant, quant1;
   
    for(i=0;i<10;i++)
    {   cout<<"Nome: ";
        cin>>nome[i];
        cout<<"Total de vendas: $";
        cin>>tot[i];
        soma+=tot[i];
        cout<<"Comissão: %";
        cin>>com[i];
        cout<<"\n";
    }
    cout<<"Relatorio Final\n";
     for(i=0;i<10;i++)
    {   rec[i]=tot[i]*(com[i]/100);
           cout<<"\nVendedor: "<<nome[i];
          cout<<"\nComissao: "<<rec[i];
    }
    for(i=0;i<10;i++)
    {   if (rec[i]>ma)
          { quant=i;
          ma=rec[i];
          }
     }
    cout<<"\nMaior comissao: "<<ma<<"\tVendedor: "<<nome[quant];
    for(i=0;i<10;i++)
    {   if (rec[i]<me)
          { quant1=i;
          me=rec[i];
          }
     }
    cout<<"\nMenor comissao: "<<me<<"\tVendedor: "<<nome[quant1];
    cout<<"\nTotal vendido: "<<soma;
}
