#include <iostream>
using namespace std;
int main ()
{
    int c;
    float val;
    cout<<"Poupança = 1";
    cout<<"\nFundos de renda fixa = 2";
    cout<<"\n";
    cout<<"\nTipo de Investimento: ";
    cin>>c;
    cout<<"Valor do Investimento: ";
    cin>>val;
    
    if (c==1)
        cout<<"Rendimento: "<<val+(val*0.03);
    if (c==2)
        cout<<"Rendimento: "<<val+(val*0.04);
}
