#include <stdio.h>
int l(int n){
    return n + n + 1;
}
int main(){
    int c;
    int counter = 0;
    scanf("%d", &c);
    while (c--){
        counter++;
        int a;
        int t = 0;
        scanf("%d",&a);
        if (a<3){
            printf("0\n");
        }
        else{
            while (a>0){
                t++;
                a -= l(t);
                if (a<0){
                    t--;
                }
                
            }
            printf("Case %d: %d\n",counter, t );
        }
    }
}