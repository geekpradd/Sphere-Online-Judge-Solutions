#include <cstdio>
#include <cstring>
#include <cmath>

int main(int argc, char* argv[]){
    int cases;
    scanf("%d", &cases);
    int i;
    for (i=0;i<cases;++i){
        int a,b;
        scanf("%d %d", &a, &b);
        int result =  pow((double) a,b); 
        char str[1000000];
        sprintf(str, "%d", result);
        char out = str[strlen(str)-1];
        printf("%c\n",out );
    }
    return 0;
}