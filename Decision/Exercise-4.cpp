#include <iostream>
using namespace std;
int main ()
{
    float n1, n2, n3;
    
    cout<<"Numeros: ";
    cin>>n1>>n2>>n3;
    
    if ((n1 > n2)&&(n1 > n3))
        cout<<"O numero "<<n1<<" e o maior";
    if ((n2 > n1)&&(n2 > n3))
        cout<<"O numero "<<n2<<" e o maior";
    if ((n3 > n1)&&(n3 > n2))
        cout<<"O numero "<<n3<<" e o maior";
        
}
