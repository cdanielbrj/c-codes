#include <iostream>
using namespace std;
int main ()
{
    int num, cont;
   
    cont=1;
   
    cout<<"\nN�mero: ";
    cin>>num;
   
    while (cont<=10)
    {   cout<<"\n"<<num<<" x "<<cont<<" = "<<num*cont;
        cont=cont+1;
    }
}
