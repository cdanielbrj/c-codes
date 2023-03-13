#include <iostream>
using namespace std;
int main ()
{
    int cont, per, idade, midade, opn, q1, q2, q3, calc;
    q1=0;
    q2=0;
    q3=0;
    midade=0;


    cout<<"Nota do Filme: ";
    cout<<"\n";
    cout<<"\n - Regular (1)";
    cout<<"\n - Bom     (2)";
    cout<<"\n - Otimo   (3)";
    cout<<"\n";


    for(cont=1;cont<=3;cont++)
    {    cout<<"\nOpiniao do filme: ";
        cin>>opn;
        cout<<"Idade: ";
        cin>>idade;


        if(opn==3)
        {    q1++;
            midade=midade+idade;
            calc=midade/q1;
        }
        if(opn==1)
            q2++;
        if(opn==2)
        {    q3++;
            per=q3*(100/3);
        }
    }
    cout<<"\nMedia dos que gostaram: "<<calc;
    cout<<"\nQuantidade de 'Regular': "<<q2;
    cout<<"\nPercentagem de 'Bom': %"<<per;
}
