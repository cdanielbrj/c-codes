#include <iostream>
using namespace std;
int main ()
{
    float sal;
    
    cout<<"Salario: ";
    cin>>sal;
    
    if (sal<300.00)
        cout<<"Novo salario: "<<((sal*15)/100)+sal;
        
    if ((sal>=300.00)&&(sal<600.00))
        cout<<"Novo salario: "<<((sal*10)/100)+sal;
    
    if ((sal>=600.00)&&(sal<900.00))
        cout<<"Novo salario: "<<((sal*5)/100)+sal;
    
    if (sal>900.00)
        cout<<"Aumento invalido ";
}
