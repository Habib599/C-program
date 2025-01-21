#include<stdio.h>
long long fact(long long n)
{
    // base case
    if(n==0) return 1;

    long long int ans=fact(n-1);
    return ans*n;
}
int main()
{
    long long  n;
    scanf("%lld",&n);
    long long  ans=fact(n);
    printf("%lld",ans);
    return 0;
}