#include <stdio.h>

int main(){
    int i;
    for (i=0;i<10;++i){
        long long total, dif;
        scanf("%llu", &total);
        scanf("%llu", &dif);
        long long y = (total-dif)/2;
        long long x = y+2;
        printf("%llu\n%llu\n",x,y );
    }
    return 0;
}