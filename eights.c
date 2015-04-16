#include <stdio.h>

int main(){
    int a,i;
    scanf("%d", &a);
    for (i=0;i<a;++i){
        unsigned long long t;
        scanf("%llu", &t);
        printf("%llu\n", 192+(250*(t-1)));
    }
    return 0;
}
//Simple algorithm and pattern searching did it...