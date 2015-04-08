#include <stdio.h> 
void bubbleSort(int ar[], int size){
    int p,i;
    //This is a  modified Bubble Sort ALgorithm that uses a for loop
    for (p=0;p<(size-1);++p){
        int swaps=0;
        for (i=0;i<(size-1);++i){
            if (ar[i]>ar[i+1]){
                int temp = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = temp;
                swaps++;
            }
        }
    }
}
int main(int argc, char* argv[]){
    //This was easy.. Simple Sorting and I was done
    int c,i;
    scanf("%d", &c);
    for (i=0;i<c;++i){
        int t,z;
        int s=0;
        scanf("%d", &t);
        int a[t], b[t];
        for(z=0;z<t;++z){
            scanf("%d", &a[z]);
        }
        bubbleSort(a,t);
        for(z=0;z<t;++z){
            scanf("%d", &b[z]);
        }
        bubbleSort(b,t);
        for (z=0;z<t;++z){
            s+=a[z]*b[z];
        }
        printf("%d\n",s );
    }
    return 0;
}