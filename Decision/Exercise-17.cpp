#include <iostream>
using namespace std;
int main ()
{
    int s;
    
    cout<<"Senha: ";
    cin>>s;
    
    if (s==4531)
        cout<<"Acesso permitido";
    else
        cout<<"Acesso negado";
}
