#include <iostream>
using namespace std;
int main()
{
    int i, codest[10], est[10], a=0, b=10, codc=1, codp, quant;
    
    for (i=0;i<10;i++)
    {    codest[i]=a++;
        est[i]=b;
    }
    for (i=0;codc!=0;i++)
    {    cout<<"Codigo do Cliente: ";
        cin>>codc;
        if (codc==0)
            break;
        cout<<"Codigo do Produto: ";
        cin>>codp;
        if ((codp<0)||(codp>9))
        {    cout<<"Codigo inexistente.\n\n";
            while ((codp<0)||(codp>9))
            {    cout<<"Codigo do Produto: ";
                cin>>codp;
                if ((codp<0)||(codp>9))
                    cout<<"Codigo inexistente.\n\n";
            }
        }
        cout<<"Quantidade desejada: ";
        cin>>quant;
        if (quant>est[codp])
            cout<<"Nao temos estoque suficiente desta mercadoria.\n\n";
        if (quant<=est[codp])
        {    est[codp]=est[codp]-quant;
            cout<<"Pedido atendido. Obrigado e volte sempre.\n\n";
        }
    }
    cout<<"\tRelatorio Final\n";
    for (i=0;i<10;i++)
        cout<<"\nProduto: "<<codest[i]<<" \tEstoque: x"<<est[i];
}
