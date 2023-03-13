#include <iostream>
using namespace std;
int main ()
{
    float n1, n2, n3, media, m1, m2, calc;
    int mat, freq, rep1, rep2, cont;
   
    rep1=0;
    rep2=0;
    m1=0;
    m2=10;
    calc=0;
   
    for(cont=1;cont<=10;cont++)
    {   cout<<"Matrícula: ";
        cin>>mat;
        cout<<"Três notas: ";
        cin>>n1>>n2>>n3;
        cout<<"Frequência: ";
        cin>>freq;
   
        media=(n1+n2+n3)/3;
        cout<<"Media: "<<media<<"\n";
        cout<<"\n";
       
        if (media>m1)
           m1=media;
        if (media<m2)
           m2=media;


        if ((media<=5)||(freq<40))
           rep1++;
        if (freq<40)
           rep2++;
        calc=rep2*(100/10);
     }
    cout<<"Maior nota: "<<m1;
    cout<<"\nMenor nota: "<<m2;
    cout<<"\nTotal reprovados: "<<rep1;
    cout<<"\nReprovados por falta: %"<<calc;
}
