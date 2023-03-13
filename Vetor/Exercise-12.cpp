#include <iostream>
using namespace std;
int main()
{
    int i, num[5], soma=0;
    for(i=0;i<5;i++)
    {   cout<<"Digite o "<<i+1<<"º número\n";
        cin>>num[i];
        soma+=num[i];
    }
    cout<<"Os números digitados foram: \n";
    cout<<num[1]<<" + "<<num[2]<<" + "<<num[3]<<" + "<<num[4]<<" + "<<num[5]<<" = "<<soma;
}
