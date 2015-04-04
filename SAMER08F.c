#include <stdio.h>


/*
* The algorithm to be used is simply a summation of squares
* That is, in a nxn grid there are 1^2+2^2+...n^2 squares
* This can be abbreviated to n*(n+1)*(2n+1)/6 
*/
int squares(int n){
    return (n*(n+1)*(2*n+1))/6;
}
int main(int argc, char* argv[]){

    int n;
    while (1){
        scanf("%d",&n);
        if (n==0){
            break;
        }
        printf("%d\n",squares(n) );
    }

    //Worked!   
    return 0;
}