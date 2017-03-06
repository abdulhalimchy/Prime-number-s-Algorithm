#include<stdio.h>
#include<iostream>
#include<math.h>
#define LL long long
using namespace std;

void prime_factors(LL n)
{
    LL root=sqrt(n);
    while(n>0 && n%2==0)
    {
        printf("2 ");
        n=n/2;
    }

    // n must be odd;
    for(LL i=3; i<=root; i=i+2)
    {
        while(n%i==0)
        {
            printf("%lld ", i);
            n=n/i;
        }
    }

    // if n is prime;
    if(n>2)
        printf("%lld ", n);
}
int main()
{
    LL n;
    while(scanf("%lld", &n)==1)
    {
        prime_factors(n);
        printf("\n");
    }
    return 0;
}
