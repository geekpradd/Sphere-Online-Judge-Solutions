#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int a = 1;
    int count = 0;
    while (a){
        char entry[100];
        fgets(entry,100,stdin);
        if (count==0){
            printf("Ready\n");
            count++;
        }
        if (strcmp(entry, "  \n")==0){
            break;
        }
        else if ((strcmp(entry, "bd\n")==0) || (strcmp(entry, "db\n")==0) || (strcmp(entry, "pq\n")==0) || (strcmp(entry, "qp\n")==0)){
            printf("Mirrored pair\n");
        }
        else{
            printf("Ordinary pair\n");
        }
        
    }
    return 0;
}