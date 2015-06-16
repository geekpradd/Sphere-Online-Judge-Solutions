#include <bits/stdc++.h>
#include <cstdio>
#include <math.h>
#include <numeric>
using namespace std;
//Solved 16 June 2015

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int block, temp;
    
    cin >> block;
    while (block!=-1){
        int sum;
        int steps = 0;
        vector<int> holder;
        while (block--){
            cin >> temp;
            holder.push_back(temp);
        }
        int size = holder.size();
        sum = accumulate(holder.begin(),holder.end(),0);
        double average = sum/(double)size;
        if (fmod(average,1)!=0){
            cout << "-1" << endl;
        }
        else {
            for (auto n: holder){
                if (n>average){
                    steps = steps + (n-average);
                }
            }
            cout << steps << endl;
        }
        cin >> block;
    }
    //Allright did it, was very fast. C++14 to the win
}