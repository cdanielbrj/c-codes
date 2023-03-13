#include <iostream>
using namespace std;
int main ()
{
    int cont, pas;
    float num;
    pas=0;
    for (cont=1;cont<=10;cont++)
    {    cout<<"Numeros: ";
        cin>>num;
        if ((num>=30&&num<=90))
            pas=pas++;
    }
    cout<<"Numeros entre 30 e 90: "<<pas;
}
