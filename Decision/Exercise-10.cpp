#include <iostream>
using namespace std;
int main ()
{
    float custo, dist, impos;
    
    cout<<"Custo de Fabrica: ";
    cin>>custo;
    
    if (custo<12.000)
    {    dist = (custo*5)/100;
        cout<<"Custo total: "<<custo+dist;
    }
    if ((custo>=12.000)&&(custo<=25.000))
    {    dist = (custo*10)/100;
        impos = (custo*15)/100;
        cout<<"Custo total: "<<custo+dist+impos;
    }
    if (custo>25.000)
    {    dist = (custo*15)/100;
        impos = (custo*20)/100;
        cout<<"Custo total: "<<custo+dist+impos;
    }
}
