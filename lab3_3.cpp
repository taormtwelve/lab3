#include<iostream>
using namespace std;
int main()
{
    double n=2,sum=0;
     while(n<=69){
        sum=sum+(1/n);
        n++;
    }
    cout << sum;
    return 0;
}
