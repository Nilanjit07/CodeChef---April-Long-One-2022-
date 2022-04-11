#include <stdio.h> 
int main() 
{ 
    long long int t; 
    scanf("%lld",&t);
    while (t--) 
    { 
        long long int a, b; 
        scanf("%lld %lld",&a,&b); 
        if (a % 2 == 0) 
        { 
            if ((a + 2) <= b) 
            {
                printf("%lld %lld",a,a+2); 
            }
            else 
            {
                printf("-1"); 
            }
        }
        else if (a % 3 == 0) 
        { 
            if ((a + 3) <= b) 
            {
                printf("%lld %lld",a,a+3); 
            }
            else 
            {
                printf("-1"); 
            }
        }
        else 
        { 
            if ((a + 3) <= b) 
            {
                printf("%lld %lld",a+1,a+3); 
            }
            else 
            {
                printf("-1"); 
            }
        }
        printf("\n"); 
    } 
}
