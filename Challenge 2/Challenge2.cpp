#include <stdio.h>
#include <iostream>
using namespace std;
 

 long long power(int a)
{
    int i;
    long long ans=1;
     
    for(i=1; i<=a; i++)
    {
        ans*=a;
    }
     
    return ans;
}
 
int main()
{
    int i, a;
    long long ans=0;
     
    for(i=1; i<=10; i++)
    {
        ans=(ans+power(i))%10000000000000;
    }
     
    // ans=(ans%10000000000);
     
    printf("%lld\n",ans);
     
    return 0;
}
 
