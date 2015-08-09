#include <bits/stdc++.h>
int pow(int n, int p){
	int v = 1;
	while (p--){
		v *= n;
	}
	return v;
}
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int run = 1;
	int n;
	cin >> n;
	while (n!=-1){
		bool didnt = true;
		int h = n + 1;
		int t = h;
		int c[h];
		while (t--){
			int temp;
			cin >> temp;
			c[n-t] = temp;
		}
		int k;
		cin >> k;
		while (k--){
			int s = 0;
			int val;
			cin >> val;
			for (int repeater = 0; repeater < h; repeater++){
				s += c[repeater] *  pow(val, (n-repeater));
			}
			if (didnt){
				cout << "Case " << run << ":" <<endl;
				didnt = false;
			}
			cout << s << endl;
		}
		cin >> n;
		run +=1;
	}
	return 0;
}
//Incomplete algo.. Works but is slow. Gotta work on this
//Last Update: 9th August 2015