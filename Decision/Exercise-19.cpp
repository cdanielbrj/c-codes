#include <iostream>
using namespace std;
int main ()
{
    float alt, sex;
    
    cout<<"Masculino = 1";
    cout<<"\nFeminino = 2";
    cout<<"\n";
    cout<<"\nAltura e Sexo: ";
    cin>>alt>>sex;
    
    if (sex==1)
        cout<<"Peso ideal masculino: "<<(72.7*alt)-58;
    if (sex==2)
        cout<<"Peso ideal feminino: "<<(62.1*alt)-44.7;
}
