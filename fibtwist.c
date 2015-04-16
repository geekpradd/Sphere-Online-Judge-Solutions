#include <stdio.h>

int fibo(int n){
    if (n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1) + fibo(n-2) + (n-1);
    }
}

int main(){
    int cases,i;
    scanf("%d", &cases);
    for (i=0;i<cases;++i){
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n",fibo(a)%b );
    }
    return 0;
}