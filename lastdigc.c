#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int a, int b){
    int i;
    int r=1;
    for (i=0;i<b;++i){
        r = r*a;
    }
    return r;
}

int main(int argc, char* argv[]){
    int cases;
    scanf("%d", &cases);
    int i;
    for (i=0;i<cases;++i){
        int a,b;
        scanf("%d %d", &a, &b);
        int result =  power(a,b); 
        char str[1000000];
        sprintf(str, "%d", result);
        char out = str[strlen(str)-1];
        printf("%c\n",out );
    }
    return 0;
}