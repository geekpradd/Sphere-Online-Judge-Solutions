#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main(){
    int cases;
    set<int> demo;
    scanf("%d", &cases);
    while (cases--){
        int t;
        
        scanf("%d", &t);
        if (demo.find(t)!=demo.end()){
            demo.erase(demo.find(t));
        }
        else{
            demo.insert(t);
        }
    }
    set<int>::iterator i;
    for (i=demo.begin();i!=demo.end();++i){
        cout <<*i<<endl;
    }
    return 0;
}