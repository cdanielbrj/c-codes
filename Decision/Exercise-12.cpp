#include <iostream>
using namespace std;
int main ()
{
    float sal, impos;
    
    cout<<"Salario: ";
    cin>>sal;
    impos = (sal*7)/100;
        
    if (sal<350.00)
        cout<<"Novo salario: "<<(sal-impos)+100.00;
                
    if ((sal>=350.00)&&(sal<600.00))
        cout<<"Novo salario: "<<(sal-impos)+75.00;
    
    if ((sal>=600.00)&&(sal<900.00))
        cout<<"Novo salario: "<<(sal-impos)+50.00;
    
    if (sal>900.00)
        cout<<"Novo salario: "<<(sal-impos)+35.00;
}
