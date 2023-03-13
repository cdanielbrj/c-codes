#include <iostream>
using namespace std;
int main ()
{
    int i, j, log[3], prog[3], opt;
   
    cout<<"Disciplinas\n";
    cout<<"\n - Logica (1)";
    cout<<"\n - Programação (2)\n";
   
    for(i=0;i<3;i++)
    {   cout<<"\nDisciplina: ";
        cin>>opt;
        cout<<"Matricula: ";
        if(opt==1)
           cin>>log[i];
        if(opt==2)
           cin>>prog[i];
    }
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {   if(prog[j]==0)
               continue;
            if(log[i]==prog[j])
               cout<<"\nMatricula(s) com ambas as disciplinas: "<<log[i];
         }
     }
}
