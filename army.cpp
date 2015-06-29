#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    int c;
    scanf("%d", &c);
    while (c--){
        int s1, s2;
        scanf("%d", &s1);
        scanf("%d", &s2);
        vector<int> g(s1);
        vector<int> mg(s2);
        if (s1==0 && s2==0){
            printf("uncertain\n");
        }
        else{
        for (int x=0;x<s1;++x){
            int t;
            scanf("%d", &t);
            g[x] = t;
        }
        for (int x=0;x<s2;++x){
            int t;
            scanf("%d", &t);
            mg[x] = t;
        }
        sort(begin(g),end(g));
        sort(begin(mg), end(mg));
        while (g.size()>1&&mg.size()>1){
        if (g[0]<mg[0]){
            g.erase(g.begin());
        }
        else{
            mg.erase(mg.begin());
        }
    }
    printf("%s\n", g[0]>mg[1] ? "Godzilla": "MechaGodzilla" );
    }
}
}