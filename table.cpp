#include<iostream>
using namespace std;
int main()


{
    int a,sum[10],i,summ=0;
    cout<<"enter any no: " ;
    cin>>a;
    for(i=0;i<10;i++)
    {
        sum[i]=(i+1)*a;
        summ=sum[i]+summ;
        cout<<sum[i]<<"\n";
    }
    cout<<"sum is:"<<summ;
    return 0;
}