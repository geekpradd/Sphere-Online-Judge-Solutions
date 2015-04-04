#include <cmath>
#include <vector>
#include <iostream> 
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

void genPrimes(vector<int>&primes,int start,int n){
    for(int i=2;i<=n;i++){
        int root=int(sqrt(i))+1;    /*remember the square root*/
        bool found=false;       /*prime found?*/
        for(vector<int>::const_iterator it = primes.begin();it!=primes.end()&& *it<root;it++){
            if(i% *it==0){found=true;break;} /*this is not prime*/
        }
        if(!found)primes.push_back(i); /*this is a prime*/
    }
    for (int a=2;a<start;++a){
        primes.erase(std::remove(primes.begin(), primes.end(), a), primes.end());
    }
}
int main(){
    
    int turns;
    scanf("%d", &turns);
    for (int a=0;a<turns;++a){
        vector<int> vec;
        int start,end;
        scanf("%d %d", &start, &end);
        genPrimes(vec,start, end);
        int size = vec.size();
        for (int i=0;i<size;++i){
            cout << vec[i]<<endl;
        }
        cout << "\n";
    }
    
    
    
    return 0;
}