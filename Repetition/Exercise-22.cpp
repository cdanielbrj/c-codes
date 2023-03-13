#include <iostream>
using namespace std;
int main ()
{
    int idade, cont, n1, n2, n3, n4;
    float peso, m1, m2, m3, m4;
   
    cont = 1;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 0;
   
    while (cont<=3)
    {
       cout<<"Idade: ";
       cin>>idade;
       cout<<"Peso: ";
       cin>>peso;  
      
       if ((idade>=1)&&(idade<=10))
       {  n1 = n1 + 1;
          m1 = m1 + peso;
       }
       if ((idade>=11)&&(idade<=20))
       {  n2 = n2 + 1;
          m2 = m2 + peso;
       }
       if ((idade>=21)&&(idade<=30))
       {  n3 = n3 + 1;
          m3 = m3 + peso;
       }
       if (idade>31)
       {  n4 = n4 + 1;
          m4 = m4 + peso;
       }
       cont=cont+1;
    }
    cout<<"Media 1: "<<m1/n1;
    cout<<"Media 2: "<<m2/n2;
    cout<<"Media 3: "<<m3/n3;
    cout<<"Media 4: "<<m4/n4;
}
