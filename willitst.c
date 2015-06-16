#include <stdio.h>
int main(){
    long long x;
    scanf("%llu", &x);
    int isPowerOfTwo (long long x)
{
  return ((x != 0) && !(x & (x - 1))); //Copied from the net
}
    if (isPowerOfTwo(x)){
        printf("TAK\n");
    }
    else{
        printf("NIE\n");
    }
    return 0;
}