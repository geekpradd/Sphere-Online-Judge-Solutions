#include <stdio.h>
#include <stdlib.h>
int main(){
    int c;
    scanf("%d", &c);
    while (c--){
        int s;
        int sum = 0;
        scanf("%d", &s);
        int r[s];
        int x;
        for (x=0;x<s;++x){
            int t;
            scanf("%d", &t);
            r[x] = t;
        }
        for (x=0;x<s;++x){
            int t;
            for(t=(x+1);t<s;++t){
                sum += abs(r[x] - r[t]);
            }
        }
        printf("%d\n", sum );
    }
    return 0;
}