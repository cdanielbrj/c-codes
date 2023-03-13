#include <iostream>
using namespace std;
int main ()
{
    int cat, sit;
    float preco, aum, impos, pf;
    
    cout<<"Preco do produto: ";
    cin>>preco;
    cout<<"\nCategorias:";
    cout<<"\n  -Limpeza = 1";
    cout<<"\n  -Alimentacao = 2";
    cout<<"\n  -Vestuario = 3";
    cout<<"\nCategoria: ";
    cin>>cat;
    cout<<"\nSituacoes:";
    cout<<"\n  -Refrigeracao: Sim = 1";
    cout<<"\n  -Refrigeracao: Nao = 2";
    cout<<"\nSituacao: ";
    cin>>sit;
    
    //1º Caso
    if ((preco<=25.00)&&(cat==1))
    {    aum = preco*0.05;
        cout<<"Aumento de: "<<aum;
    }
    if ((preco<=25.00)&&(cat==2))
    {    aum = preco*0.08;
        cout<<"Aumento de: "<<aum;
    }
    if ((preco<=25.00)&&(cat==3))
    {    aum = preco*0.10;
        cout<<"Aumento de: "<<aum;
    }
    //2º Caso
    if ((preco>25.00)&&(cat==1))
    {    aum = preco*0.12;
        cout<<"Aumento de: "<<aum;
    }
    if ((preco>25.00)&&(cat==2))
    {    aum = preco*0.15;
        cout<<"Aumento de: "<<aum;
    }
    if ((preco>25.00)&&(cat==3))
    {    aum = preco*0.18;
        cout<<"Aumento de: "<<aum;
    }
    //Imposto
    if ((cat==2)||(sit==1))
        impos = preco*0.05;
    else
        impos = preco*0.08;
    //Conclusão
    pf = (preco+aum)-impos;
    cout<<"\nPreco final: "<<pf;    
    //Classificação
    if (pf<=50)
        cout<<"\nProduto barato";
    if ((pf>50.00)&&(pf<120.00))
        cout<<"\nProduto normal";
    if (pf>=120.00)
        cout<<"\nProduto caro";
}
