#include <iostream>
using namespace std;
int main ()
{
    int canal, cont, quant1, quant2, quant3, quant4, total, total1, total2, total3, totalt;
    total=0;
    total1=0;
    total2=0;
    total3=0;
    totalt=0;
    canal=1;
    for (cont=1;canal>0;cont++)
    {   cout<<"Canal: ";
        cin>>canal;
        if (canal==4)
        {  cout<<"Quant. Pessoas: ";
           cin>>quant1;
           total=total+quant1;
           totalt=totalt+total;
        }
        if (canal==5)
        {  cout<<"Quant. Pessoas: ";
           cin>>quant2;
           total1=total1+quant2;
           totalt=totalt+total1;
        }
        if (canal==7)
        {  cout<<"Quant. Pessoas: ";
           cin>>quant3;
           total2=total2+quant3;
           totalt=totalt+total2;
        }
        if (canal==12)
        {  cout<<"Quant. Pessoas: ";
           cin>>quant4;
           total3=total3+quant4;
           totalt=totalt+total3;
        }
        if (canal==0)
           break;
    }
    cout<<"Audiência do canal 4: %"<<total*(100/totalt);
    cout<<"\nAudiência do canal 5: %"<<total1*(100/totalt);
    cout<<"\nAudiência do canal 7: %"<<total2*(100/totalt);
    cout<<"\nAudiência do canal 12: %"<<total3*(100/totalt);
}
