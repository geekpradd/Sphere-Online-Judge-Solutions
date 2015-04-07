#include <stdio.h>
#include <time.h>
long long gcd(long long a,long long b){
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
long long gcd2(long long a,long long b){
    while (b!=0){
        long long t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main(){
    int cases;
    scanf("%d",&cases);
    while(cases){
        long long a,b;
        scanf("%llu %llu", &a, &b);
        printf("%llu\n",gcd2(a,b) );
        --cases;
    }
    // clock_t start,end ;
    // unsigned long long a,b;
    // a = 400000;
    // b = 1000000000000000000;
    // start = clock();
    // printf("GCD of 4 and 180 is %llu \n", gcd(a,b));

    // end = clock();
    // double t = (double)(end-start)/CLOCKS_PER_SEC;
    // printf("Elapsed: %f\n",t );
    //  start = clock();
    // printf("GCD of 4 and 180 is %llu \n", gcd2(a,b));

    // end = clock();
    //  t = (double)(end-start)/CLOCKS_PER_SEC;
    // printf("Elapsed: %f\n",t );
    return 0;
}