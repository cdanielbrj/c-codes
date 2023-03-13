#include <iostream>
using namespace std;
int main ()
{
    int num, cont, primo, par;
    primo=0;
    par=0;
    for(cont=1;cont<=10;cont++)
    {  
        cout<<"Número: ";
        cin>>num;
       
        if (num%2==0)
           par=par+num;
        if ((num==2)||(num==3)||(num==5)||(num==7))
           primo=primo+num;
        if ((num%2!=0)&&(num%3!=0)&&(num%5!=0)&&(num%7!=0))
           primo=primo+num;
    }
    cout<<"\nSoma dos Pares: "<<par;
    cout<<"\nSoma dos primos: "<<primo;
}
