#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l;
    cin >> l;
    int *a = new int[l];
    for (int t=0;t<l;++t){
        cin >> a[t];
    }
    int k,max;
    cin >> k;
    for (int i=0;i<=l-k;++i){
        max = a[i];
        for (int v=1;v<k;++v){
            if (a[i+v]>max)
                max = a[i+v];
        }
        cout <<  max << " ";
    }
    cout << endl;
    return 0;
}
//Sliding window algorithm to the win.. Took some help from the net
//Solved 29 June 2015