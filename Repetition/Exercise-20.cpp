#include <iostream>
using namespace std;
int main ()
{
    int num, cont, primo;
    primo=0;
  
    for(cont=1;cont<=10;cont++)
    {  
        cout<<"Número: ";
        cin>>num;
   
        if ((num==2)||(num==3)||(num==5)||(num==7))
           primo++;
        if ((num%2!=0)&&(num%3!=0)&&(num%5!=0)&&(num%7!=0))
           primo++;
    }
    cout<<"\nNúmeros primos: "<<primo;
}
