#include <iostream>
using namespace std;
int main ()
{
    int id;
    
    cout<<"Idade: ";
    cin>>id;
    
    if (id>=18)
        cout<<"Maior de idade";
    else
        if (id<18)
            cout<<"Menor de idade";
}
