#include <cstdio>
int main(){
    int x;
    long long int z;
    scanf("%d", &x);
    scanf("%lld", &z);
    long long int d=z;
    while (--x){
        long long int t;
        scanf("%llu", &t);
        d = d^t;
    }
    printf("%lld\n",d );
//XOR operator to the win! THis operator is very useful in Encryption!
// Thanks http://manyprogrammingtutorials.blogspot.in/2014/01/spoj-7742-onotole-needs-your-help.html for the hint
}