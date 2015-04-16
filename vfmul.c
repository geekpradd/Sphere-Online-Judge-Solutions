#include <stdio.h>
int main(void){
    int a,i;
    scanf("%d", &i);
    for (a=0;a<i;++a){
        long long c,d;
        scanf("%llu %llu", &c, &d);
        printf("%llu\n",c*d );
    }
    return 0;
}