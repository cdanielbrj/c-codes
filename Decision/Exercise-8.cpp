#include <iostream>
using namespace std;
int main ()
{
    float sal;
    
    cout<<"Salario: ";
    cin>>sal;
    
    if (sal<=300.00)
        cout<<"Salario reajustado: "<<sal+(sal*0.35);
    if (sal>300.00)
        cout<<"Salario reajustado: "<<sal+(sal*0.15);
}
