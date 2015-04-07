#include <iostream>
#include <algorithm>
#define true 1
#define false 0
using namespace std;
int is_prime(long long number){
    if (number==2 || number == 3){
        return 1;
    }
    if (number%2==0 || number%3 ==0){
        return 0;
    }
    int i = 5;
    int w = 2;
    while (i*i <=number){
        if (number%i==0){
            return 0;
        }
        i += w;
        w = 6 - w;
    }
    return 1;
}
int main(){
    int cases;
    cin >> cases;
    for (int i=0;i<cases;++i){
        long long num;
        cin >> num;
        if (is_prime(num)){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
    
}