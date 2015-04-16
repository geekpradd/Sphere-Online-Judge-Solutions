#include <stdio.h>

double max(double n){
    double s=0;
    double a=1;
    while ((int)s!=(int)n){
        s+= 1/(a+1);
        printf("s is %lf\n",s );
        a++;
        if (s>120){
            break;
        }
        
    }
    return a;
}

int main(void){
    double x;
    scanf("%lf",&x);
    while(x){
        //DO the calculation 
        printf("%lf\n",max(x) );
        scanf("%lf", &x);
    }
}