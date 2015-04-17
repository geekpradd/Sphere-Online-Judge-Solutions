#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   //Void pointers.. Convert it to an int pointer and then dereference it
   return ( *(int*)a - *(int*)b );
}
int main(void){
    int a,b;
    scanf("%d", &a);
    int array[a];
    for (b=0;b<a;++b){
        int t;
        scanf("%d", &t);
        array[b] = t;
    }
    qsort(array, a, sizeof(int), cmpfunc);
    for (b=0;b<a;++b){
        printf("%d\n",array[b] );
    }
    return 0;
}
//Easy one..C has a builtin implementation of quicksort.. Used it :D