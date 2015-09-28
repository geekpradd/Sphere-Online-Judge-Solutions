#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int length;
	cin >> length;
	while (length){
		char original[length+1];
		char ambigious[length+1];
		original[length] = '\0';
		ambigious[length] = '\0';
		for (int i = 0; i<length; ++i){
			int t;
			cin >> t;
			string temp = to_string(t);
			original[i] = temp.c_str()[0];
			ambigious[t-1] = to_string(i+1).c_str()[0];
		}
		if (strcmp(original, ambigious))
			cout << "not ambiguous" << endl;
		else
			cout << "ambiguous" << endl;
		cin >> length;
	}
	return 0;

}	

