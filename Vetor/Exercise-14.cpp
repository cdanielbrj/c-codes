#include <iostream>
using namespace std;
int main ()
{
char aluno [3] [21];
char situa [3] [21];
int i, quant=0, quant1=0, quant2=0;
float nota1 [3], nota2 [3], media [3], soma=0;


for (i=0;i<3;i++)
{    cout<<"Nome: ";
     cin>>aluno[i];
     cout<<"Primeira Nota: ";
     cin>>nota1[i];
     cout<<"Segunda Nota: ";
     cin>>nota2[i];
     media[i]=(nota1[i]+nota2[i])/2;
     soma+=media[i];


     if (media[i]>=6.0)
     { situa[i]="Aprovado";
       quant++;
     }
     if ((media[i]>=4.0)&&(media[i]<6.0))
     { situa[i]="Exame";
       quant1++;
      }
     if (media[i]<4.0)
     { situa[i]="Reprovado";
       quant2++;
      }
}
cout<<"Relatório de Notas";
cout<<"\nAluno \t1 Nota \t2 Nota \tMédia \tSituação";


for(i=0;i<3;i++)
cout<<"\n"<<aluno[i]<<"\t"<<nota1[i]<<"\t"<<nota2[i]<<"\t"<<media[i]<<"\t"<<situa[i];
cout<<"\nMédia da Classe: "<<soma/3;
cout<<"\nQuantidade de Aprovados: "<<quant*(100/3)<<"%";
cout<<"\nQuantidade de Exames: "<<quant1*(100/3)<<"%";
cout<<"\nQuantidade de Reprovados: "<<quant2*(100/3)<<"%";
}
