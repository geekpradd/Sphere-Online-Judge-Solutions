#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
double upto_n_overhangs(int n){
    vector<int> x(n);
    iota(begin(x),end(x),2);
    double sum = 0;
    for (auto n:x){
        double a = 1/double(n);
        sum = sum+a;
    }
    return sum;
}

int main(){
    double n;
    scanf("%lf", &n);
    while (n){
        for (int i=1;i<100000;++i){
            if (upto_n_overhangs(i)>n){
                cout << i << " card(s)" << endl;
                break;
            }
        }
        scanf("%lf", &n);
    }
    return 0;
    //Solved it! C++14 to the win..
}