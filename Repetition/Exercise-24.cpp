#include <iostream>
using namespace std;
int main ()
{
    int cont, sexo, resp, q, q1, q2, q3, q4, calc;
    q=0;
    q1=0;
    q2=0;
    q3=0;
    q4=0;
    cout<<"Para sexo: ";
    cout<<"\n";
    cout<<"\n - Masculino (1)";
    cout<<"\n - Feminino  (2)";
    cout<<"\n";
    cout<<"\nPara resposta: ";
    cout<<"\n - Sim (1)";
    cout<<"\n - Nao (2)";
    cout<<"\n";
    
    for(cont=1;cont<=10;cont++)
    {    cout<<"\nSexo: ";
        cin>>sexo;
        cout<<"Feedback: ";
        cin>>resp;
        
        if(resp==1)
            q1++;
        if(resp==2)
            q2++;
        if((sexo==2)&&(resp==1))
            q3++;
        if(sexo==1)
            q++;
        if((sexo==1)&&(resp==2))
            q4++;
            calc=q4*(100/q);
    }
    cout<<"\nFeedback 'Sim': "<<q1;
    cout<<"\nFeedback 'Nao': "<<q2;
    cout<<"\nMulheres com Feedback 'Sim': "<<q3;
    cout<<"\nPercentagem Masculina com Feedback 'Nao': %"<<calc;
}
