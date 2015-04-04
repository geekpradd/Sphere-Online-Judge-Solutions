#include <stdio.h>

void handle(int a, int b, int c){
    char * text;
    if ((b-a)==(c-b)){
        text = "AP";
        int next = c + (c-b);
        printf("%s %d\n",text,next );
    }
    else if ((b/a)==(c/b)){
        text = "GP";
        int next = c * (c/b);
        printf("%s %d\n",text,next );
    }
}

int main(int argc, char*argv[]){
    int a,b,c;
    while(1){
        scanf("%d %d %d", &a, &b,&c);
        if (a==0 && b==0 &&c==0){
            break;
        }
        else{
            handle(a,b,c);
        }
    }
    return 0;
}