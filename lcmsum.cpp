#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
long long gcd(long long a, long long b){
    return (b==0) ? a : gcd(b, a%b);
}
long long lcm(long long a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int cases;
    scanf("%d", &cases);
    while (cases--){
        unsigned long long n;
        unsigned long long sum=0;
        scanf("%llu", &n);
        for (unsigned long long x=1;x<=n;++x){
            sum = sum + lcm(x,n);
        }
        printf("%llu\n",sum);
        //Algorithm is correct but slow! Getting TLE!
    }
    return 0;
}
