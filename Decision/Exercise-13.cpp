#include <iostream>
using namespace std;
int main ()
{
    float preco, aum, nv;
    
    cout<<"Pre�o do Produto: ";
    cin>>preco;
    
    //Tabela 1
    if (preco<=50.00)
    {    aum = preco*0.05;
        nv = preco+aum;
        cout<<"\nNovo pre�o: "<<nv;
    }
    if ((preco>50.00)&&(preco<=100.00))
    {    aum = preco*0.10;
        nv = preco+aum;
        cout<<"\nNovo pre�o: "<<nv;
    }
    if (preco>100.00)
    {    aum = preco*0.15;
        nv = preco+aum;
        cout<<"\nNovo pre�o: "<<nv;
    }
    //Tabela 2
    if (nv<=80.00)
        cout<<"\nProduto barato";
        
    if ((nv>80.00)&&(nv<=120.00))
        cout<<"\nProduto normal";
        
    if ((nv>120.00)&&(nv<=200.00))
        cout<<"\nProduto caro";
        
    if (nv>200.00)
        cout<<"\nProduto muito caro";
}
