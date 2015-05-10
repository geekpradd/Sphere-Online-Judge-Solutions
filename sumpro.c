#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while (cases--){
        unsigned long long a,b,c=0;
        scanf("%llu", &a);
        b=a;
        while (b!=0){
                c = (c%1000000007 + ((a/b)%1000000007 * b%1000000007)%1000000007);
                b--;
        }
        printf("%llu\n",c % 1000000007 );
    }

    return 0;
}
