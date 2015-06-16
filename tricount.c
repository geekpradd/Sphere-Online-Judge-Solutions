#include <stdio.h>

//Solved 16 June 2015
//Used this: http://www.billthelizard.com/2009/08/how-many-triangles.html
int main(void){
    int cases;
    scanf("%d",&cases);
    while (cases--){
        long long n;
        scanf("%llu",&n);
        long long ans = n * (n + 2) * (2*n + 1) / 8;
        printf("%llu\n",ans );
    }
    return 0;
}