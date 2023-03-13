#include <iostream>
using namespace std;
int main ()
{
    float sal;
    
    cout<<"Salario: ";
    cin>>sal;
    
    if (sal<=300.00)
        cout<<"Novo salario: "<<sal+(sal*0.50);
        
    if ((sal>300.00)&&(sal<=500.00))
        cout<<"Novo salario: "<<sal+(sal*0.40);
        
    if ((sal>500.00)&&(sal<=700.00))
        cout<<"Novo salario: "<<sal+(sal*0.30);
        
    if ((sal>700.00)&&(sal<=800.00))
        cout<<"Novo salario: "<<sal+(sal*0.20);
        
    if ((sal>800.00)&&(sal<=1000.00))
        cout<<"Novo salario: "<<sal+(sal*0.40);
        
    if (sal>1000.00)
        cout<<"Novo salario: "<<sal+(sal*0.05);
}
