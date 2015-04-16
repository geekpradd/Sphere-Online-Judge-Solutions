#include <stdio.h> 

long long fibo(long long n){
    if (n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int cases,i;
    scanf("%d", &cases);
    for (i=0;i<cases;++i){
        long long a,b;
        scanf("%llu %llu", &a, &b);
        long long s=0;
        while (a<=b){
            s+=fibo(a);
            a= a+1;
        }
        printf("%llu\n",s%1000000007 );
    }
}