#include <cstdio>
#include <cmath>
long long n(int b){
    return sqrt(b+1)-1;
}
int main(){
    int c;
    scanf("%d", &c);
    int co = 0;
    while (c--){
        co++;
        long long b;
        scanf("%lld", &b);
        printf("Case %d: %lld\n",co, n(b) );
    }
}