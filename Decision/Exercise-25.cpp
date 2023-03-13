#include <iostream>
using namespace std;
int main ()
{
    float he, hf, grat;
    
    cout<<"Horas extras: ";
    cin>>he;
    cout<<"Horas-falta: ";
    cin>>hf;
    
    grat = ((he)-2/(3)*(hf))
    
    if (grat>2400)
        cout<<"Gratificacao de: 500";
    if ((grat>1800)&&(grat<=2400))
        cout<<"Gratificacao de: 400";
    if ((grat>1200)&&(grat<=1800))
        cout<<"Gratificacao de: 300";
    if ((grat>600)&&(grat<=1200))
        cout<<"Gratificacao de: 200";
    if (grat<600)
        cout<<"Gratificacao de: 100";
}
