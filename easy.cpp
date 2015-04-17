#include <iostream>
#include <math.h>
using namespace std;
int main() {
 // your code goes here
 int a, b, arr[17], temp[17];
 cin>>a; b=a;
 for(int i=0; i<17; i++) {
  arr[i]=pow(2, i);
 }
 for(int j=16; b>0; j--) {
  while(b>=arr[j]) {
    temp[j]=log2(arr[j]); b=b-arr[j];
    cout<<temp[j]<<" "<<arr[j]<<" "<<b<<endl;
  }
 }
 return 0;
}