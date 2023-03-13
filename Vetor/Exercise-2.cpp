#include <iostream>
using namespace std;
int main ()
{
    int num[7], I;
   
    for(I=0;I<7;I++)
    {   cout<<"\nNúmero: ";
        cin>>num[I];
        if((num[I]%2==0)&&(num[I]%3==0))
        {  cout<<"Multiplo de 2 e 3\n";
           continue;
        }
        if(num[I]%2==0)
           cout<<"Multiplo de 2\n";
        if(num[I]%3==0)
           cout<<"Multiplo de 3\n";
    }
}
