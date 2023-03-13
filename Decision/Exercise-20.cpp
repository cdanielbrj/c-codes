#include <iostream>
using namespace std;
int main ()
{
    int id;
    
    cout<<"Idade: ";
    cin>>id;
    
    if ((id>=0)&&(id<=7))
        cout<<"Categoria Infantil";
    if ((id>=8)&&(id<=10))
        cout<<"Categoria Juvenil";
    if ((id>=11)&&(id<=15))
        cout<<"Categoria Adolescente";
    if ((id>=16)&&(id<=30))
        cout<<"Categoria Adulto";
    if (id>30)
        cout<<"Categoria Senior";
}
