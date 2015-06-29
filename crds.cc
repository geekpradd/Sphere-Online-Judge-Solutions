#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin >> c;
    while (c--){
        long long l;
        cin >> l;
        long long x = l*(2+((l-1)*1.5));
        cout << x%1000007 << endl;
    }
    return 0;
}
//Solved 29 June 2015
//Simple reasoning