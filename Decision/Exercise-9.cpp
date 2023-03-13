#include <iostream>
using namespace std;
int main ()
{
    float same;
    
    cout<<"Saldo medio: ";
    cin>>same;
    
    if (same>400.00)
        cout<<"Credito especial de: "<<((same*30)/100)+same;
    if ((same<=400.00)&&(same>300.00))
        cout<<"Credito especial de: "<<((same*25)/100)+same;
    if ((same<=300.00)&&(same>200.00))
        cout<<"Credito especial de: "<<((same*20)/100)+same;
    if (same<=200.00)
        cout<<"Credito especial de: "<<((same*10)/100)+same;
}
