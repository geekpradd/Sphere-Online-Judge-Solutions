#include <stdio.h> 

int main(){
    int turns,i;
    scanf("%d",&turns);
    for (i=0;i<turns;++i){
        int a,b;
        scanf("%d %d", &a, &b);
        int array[a],ix;
        for(ix=0; ix < a; ix++)
            scanf("%d", &array[ix]);

        int bestsum = 0;
        int stations = 0;
        int x;
        for (x=0;x<a;++x){
            int sum = 0;
            int turns = 0;
            int ax;
            for (ax=x;ax<a;++ax){
                sum+=array[ax];
                if (sum>b){
                    sum-=array[ax];
                    break;
                }
                
                turns++;
            }
            if (turns>stations){
                stations = turns;
                bestsum = sum;
            }
            if (turns==stations){
                if (sum<bestsum){
                    bestsum = sum;
                }
            }
        }
        printf("%d %d\n",bestsum, stations );

    }
    return 0;
}