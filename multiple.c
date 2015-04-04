#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;

    // swap the values in the two given variables
    // XXX: fails when a and b refer to same memory location
#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    // walk inwards from both ends of the string, 
    // swapping until we get to the middle
    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}

int main(){
    int calls;
    scanf("%d",&calls);
    int i;
    for (i=0;i<calls;++i){
        int a,b;
    scanf("%d %d", &a,&b);
    char str1[1000];
    char str2[1000];

    sprintf(str1,"%d",a);
    sprintf(str2,"%d",b);
    inplace_reverse(str1);
    inplace_reverse(str2);
    int d = atoi(str1);
    int c = atoi(str2);
    char sum[10000];
    sprintf(sum,"%d",d+c);
    inplace_reverse(sum);
    int t = atoi(sum);
    printf("%d\n",t);
    }
    
    
}