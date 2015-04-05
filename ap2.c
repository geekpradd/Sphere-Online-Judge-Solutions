#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    int i;
    for (i=0;i<cases;++i){
        long long third, lastthird, sum;
        scanf("%lld %lld %lld", &third, &lastthird, &sum);
        long long n = (2*sum)/(third+lastthird);
        long long lastthirdpos = n-2;
        long long d = (lastthird-third)/(lastthirdpos-3);
        long long first = third - (2*d);
        int a;
        printf("%llu\n",n );
        for (a=0;a<n;++a){
            printf("%llu ",first );
            first = first+ d;
        }
        printf("\n");
        /*
        * Nailed it! C is bloody fast! Some general AP forumlas and I was done in a giffy1
        */
    }
}