#include<iostream>
using namespace std;
int main()
{
    double n=6,sum=0;
     while(n<=19){
        sum=sum+(1/n);
        n++;
    }
    cout << sum;
    return 0;
}
