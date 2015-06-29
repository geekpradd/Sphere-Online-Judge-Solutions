#include <stdio.h>
int main(){
    int a[] = {4,5,6,6};
    int *c = &a[1];
    printf("%d\n", c[1]);
}