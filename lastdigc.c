#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long power(long long a, long long b){
    long long i;
    long long r=1;
    for (i=0;i<b;++i){
        r = r*a;
    }
    return r;
}

int main(int argc, char* argv[]){
    int cases;
    scanf("%d", &cases);
    int i;
    for (i=0;i<cases;++i){
        long long a,b;
        scanf("%llu %llu", &a, &b);
        long long result =  power(a,b); 
        char str[1000000];
        sprintf(str, "%llu", result);
        char out = str[strlen(str)-1];
        printf("%c\n",out );
    }
    return 0;
}