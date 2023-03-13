#include <iostream>
using namespace std;
int main ()
{
    float n1, n2, n3, n4, media;
    
    cout<<"Notas: ";
    cin>>n1>>n2>>n3>>n4;
    
    media = (n1+n2+n3+n4)/4;
    
    cout<<"Media: "<<media;
    
    if (media>=7)
        cout<<"\n" "Aprovado";
    else
        if (media<7)
        cout<<"\n" "Reprovado";
}
