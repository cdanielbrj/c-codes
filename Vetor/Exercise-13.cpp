#include <iostream>
using namespace std;
int main()
{
    char alu[8][21];
    int i, nota[8], som=0;
   
    for(i=0;i<8;i++)
    {   cout<<"Nome do "<<i+1<<" aluno: ";
        cin>>alu[i];
        cout<<"Nota de "<<alu[i]<<": ";
        cin>>nota[i];
        cout<<"\n";
        som=som+nota[i];
    }
    cout<<"Relatorio de Notas";
    cout<<"\nAluno \tNota";
    for(i=0;i<8;i++)
    {   cout<<"\n"<<alu[i]<<"\t"<<nota[i];
    }
    cout<<"\nMedia da Classe = "<<som/8;
}
