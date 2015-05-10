#include <stdio.h>
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
//But for some damn reason, this solution is giving a NZEC..
//But when I run it in C++, replacing stdio.h with cstdio it gives me WA
// Weird.. (The C++ solution is the one that works) but this is the version which I originally coded
}