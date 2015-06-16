#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double calculate(double b, double c, double d){
    double x = 1/3;
    return pow(pow(b,3) + pow(c,3) + pow(d,3), x );
}
int main(){

    double d = calculate(6.0,8.0,10.0);
    cout << d<< endl;
}