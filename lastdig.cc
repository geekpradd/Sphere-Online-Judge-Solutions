#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <math.h>
#include <vector>
using namespace std;
int main(){
    int c;
    scanf("%d",&c);
    for (int z=0;z<c;++z){
        int a,num;
        scanf("%d %d", &a, &num);
        string srt = bitset<64>(num).to_string();
        int length = srt.length();
        reverse(srt.begin(), srt.end());
        vector<double> holder;
        for (int i=0;i<length;++i){
            if (srt[i]=='1'){
                holder.push_back(pow(2.0,i));
            }
        }
        int size=holder.size();
        double n = 1;
        for (int ax=0;ax<size;++ax){
            double temp = fmod(pow(double(a), double(holder[ax])) , double(10));
            n = n * temp;
        }
        cout << fmod(n,double(10))<<endl;
    }
    return 0;
}