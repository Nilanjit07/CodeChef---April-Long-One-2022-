#include <stdio.h>
int main() 
{
    long long int t;
    scanf("%lld",&t);
    while(t--) 
    {
        long long int n;
        scanf("%lld",&n);
        if(n%4==0) 
        {
            printf("%lld\n",n+3);
        }
        else if (n%4==1) 
        {
            printf("%lld\n",n);
        }
        else 
        {
            printf("3\n");
        }
    }
}
