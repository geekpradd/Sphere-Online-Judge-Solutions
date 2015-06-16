#include <bits/stdc++.h>
using namespace std;
//Slight modification of lastdig.. Uses strings
//Solved 16 June 2015
int g(string  a, long long b){
    if (b==0){
        return 1;
    }
    int x = a.back()  - '0';;
    if (b==1){
        return x;
    }
    int v = b%4-1;
    if (b%4 == 0){
        v = 3;
    }
    int r[10][4] = {{0,0,0,0},{1,1,1,1} ,{2,4,8,6}  ,{3,9,7,1}  ,{4,6,4,6}  ,{5,5,5,5}  ,{6,6,6,6}  ,{7,9,3,1}  ,{8,4,2,6}  ,{9,1,9,1}   };
    return r[x][v];
}
int main(){
    int cases;
    cin >> cases;
    while (cases--){
        string a;
        long long b;
        cin >> a;
        cin >> b;
        cout << g(a,b) << endl;
    }
    return 0;
}