#include <bits/stdc++.h>
#include <cstdio>
#include <sstream>
using namespace std;

int main(){
    int n,d;
    scanf("%d %d", &n, &d);
    while (n && d){
    vector<int> chairs(n);
    iota(chairs.begin(), chairs.end(),1);

    while (chairs.size()!=1){
        int size = chairs.size();
        if (d>(size-1)){
            chairs.erase(chairs.begin() + ((d-1)%size));
        }
        else{
            std::vector<int> first(chairs.begin(),chairs.begin()+(d-1));
            std::vector<int> second(chairs.begin()+d,chairs.end());

            chairs = second;
            chairs.insert(chairs.end(),first.begin(),first.end());
        }
        
    }
    printf("%d %d %d\n",n,d,chairs[0] );
    scanf("%d %d", &n, &d);
    }
    return 0;
    //What about sliding window algorithm? 
    //I could split and merge vectors though
}