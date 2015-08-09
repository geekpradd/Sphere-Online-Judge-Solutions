#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int marbles(int n){
	int out = 5;
	int incr = 7;
	while (n>1){
		out += incr;
		incr += 3;
		n--;
	}
	return out;
}
int main(){
	int c;
	scanf("%d", &c);
	while (c){
		printf("%d\n", marbles(c));
		scanf("%d", &c);
	}
	return 0;
}
//Solved 9 August 2015