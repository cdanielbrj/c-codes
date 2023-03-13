#include <iostream>
using namespace std;
int main ( )
{
    float n1, n2;
    
    cout<<"Numeros: ";
    cin>>n1>>n2;
    
    if (n1 < n2)
        cout<<"O numero "<<n1<<" e menor";
    else
        if (n1 > n2)
          cout<<"O numero "<<n2<<" e menor";
}
