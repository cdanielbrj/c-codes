#include <iostream>
using namespace std;
int main ()
{
    int id;
    float p;
    
    cout<<"Peso e idade: ";
    cin>>p>>id;
    
    if ((id<20)&&(p<=60))
        cout<<"Grupo de risco: 9";
    if ((id<20)&&(p>60)&&(p<=90))
        cout<<"Grupo de risco: 8";
    if ((id<20)&&(p>90))
        cout<<"Grupo de risco: 7";
    
    if ((id>=20)&&(id<=50)&&(p<=60))
        cout<<"Grupo de risco: 6";
    if ((id>=20)&&(id<=50)&&(p>60)&&(p<=90))
        cout<<"Grupo de risco: 5";
    if ((id>=20)&&(id<=50)&&(p>90))
        cout<<"Grupo de risco: 4";
    
    if ((id>50)&&(p<=60))
        cout<<"Grupo de risco: 3";
    if ((id>50)&&(p>60)&&(p<=90))
        cout<<"Grupo de risco: 2";
    if ((id>50)&&(p>90))
        cout<<"Grupo de risco: 1";
}
