#include <bits/stdc++.h>
using namespace std;
int is_term(int n){
    if (n==1)
        return true;
    else{
        int start = 1;
        int val = 0;
        while(start<=n){
            val += 6;
            start +=val;
            if (start==n)
                return true;
        }
        return false;
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    int input_number;
    cin >> input_number;
    while (input_number!=-1){
        cout << (is_term(input_number) ? "Y" : "N") << endl;
        cin >> input_number;
    }
    return 0;
}

//Solved 28 July 2015. A bit brute forcy but works..