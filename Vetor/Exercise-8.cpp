#include <iostream>
using namespace std;
int main()
{
    char nome[2][21];
    int i, j, pos, rec;
    float media [2], mad=0, calc;
    
    for (i=0;i<2;i++)
    {    cout<<"Aluno: ";
        cin>>nome[i];
        cout<<"Media final: ";
        cin>>media[i];
        cout<<"\n";
        if (media[i]>mad)
        {    mad=media[i];
            pos=i;
        }
        if (media[i]<7)
        {    rec=i;
            for (j=4;j<11;j++)
            {    calc=(media[i]+j)/2;
                if (calc==5)
                    break;
            }
        }
    }
    cout<<"Maior media: "<<nome[pos];
    cout<<"\n"<<nome[rec]<<" precisa de "<<calc;
}
