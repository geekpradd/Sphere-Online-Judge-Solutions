#include <iostream>
#include <sstream>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void doStuff(vector<int> &r, long long *a, long long *b){
    int bestsum = 0;
    int stations = 0;
    for (int x=0;x<*a;++x){
        int sum = 0;
        int turns = 0;
        for (int ax=x;ax<*a;++ax){
            sum+=r[ax];
            if (sum>*b){
                sum-=r[ax];
                break;
            }
            
            turns++;
        }
        if (turns>stations){
            stations = turns;
            bestsum = sum;
        }
        if (turns==stations){
            if (sum<bestsum){
                bestsum = sum;
            }
        }
    }
    cout << bestsum <<  stations <<endl; 
}

int main() {
    int turns;
    cin >> turns;
    for (int i=0;i<turns;++i){
        long long a,b;
        scanf("%llu %llu", &a, &b);
        vector<int> people;
        for (int x=0;x<a;++x){
            int temp;
            cin >> temp;
            people.push_back(temp);
        }
        doStuff(people, &a, &b);
        
}
    return 0;

}