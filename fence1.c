#include <stdio.h>
int main(){
    int c;
    while (1){
        scanf("%d", &c);
        if (c==0)
            break;
        double r = c/3.1415926;
        double area = 3.1415926*r*r/2;
        printf("%.2f\n",area );
    }
    return 0;
}
//Simple Math.. Had to use pi to greater precision
//Thanks to the commentors
//Solved 29 June 2015