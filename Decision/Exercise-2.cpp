#include <iostream>
using namespace std;
int main ()
{
    float n1, n2, media;
    
    cout<<"Notas: ";
    cin>>n1>>n2;
    
    media = (n1+n2)/2;
    
    cout<<"Media: "<<media;
    
    if ((media>=0)&&(media<4))
     cout<<"\n" "Reprovado";
    if ((media>=4)&&(media<7))
    cout<<"\n" "Exame";
    if ((media>=7)&&(media<10))
    cout<<"\n" "Aprovado";
}
