#include <iostream>
using namespace std;
int main ()
{
    float n1, n2, c;
    
    cout<<"Numeros: ";
    cin>>n1>>n2;
    cout<<"Comando: ";
    cin>>c;
    
    if ((c<=0)||(c>=5))
        cout<<"Comando Invalido";
    
    if (c==1)
        cout<<"Media: "<<(n1+n2)/2;
        
    if (c==2)
        if (n1>n2)
            cout<<"\n" "Diferenca :"<<n1-n2;
        else
            if (n1<n2)
                cout<<"\n" "Diferenca: "<<n2-n1;
    
    if (c==3)
        cout<<"Produto: "<<n1*n2;
        
    if (c==4)
        if (n1>n2)
            cout<<"\n" "Divisao :"<<n1/n2;
        else
            if (n1<n2)
                cout<<"\n" "Divisao: "<<n2/n1;    
}
