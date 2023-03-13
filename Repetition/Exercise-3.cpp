#include <iostream>
using namespace std;
int main ()
{
    int num, cont, primo;
    primo=1;
    for(num=92;num<=1478;num++)
    {  
        if ((num==2)||(num==3)||(num==5)||(num==7))
           primo=primo*num;
        if ((num%2!=0)&&(num%3!=0)&&(num%5!=0)&&(num%7!=0))
           primo=primo*num;
    }
    cout<<"Produto dos primos: "<<primo;
}
