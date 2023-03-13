#include <iostream>
using namespace std;
int main ()
{
    float sal, aum;
    
    cout<<"Salario: ";
    cin>>sal;
    
    aum = (sal*30)/100;
    
    if (sal<500.00)
        cout<<"Salario reajustado: "<<sal+aum;
    if (sal>=500.00)
        cout<<"Reajuste negado";
}
