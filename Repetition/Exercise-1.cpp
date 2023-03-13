#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Numeros: ";
    
    for (num=1000;num>=1000&&num<=2000;num++)    
        if (num%11==5)
            cout<<"\n"<<num;
}
