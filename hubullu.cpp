#include <cstdio>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b;
		scanf("%d", &a);
		scanf("%d", &b);
		const char* name = (b ? "Pagfloyd" : "Airborne" ); 
		printf ("%s wins.\n", name);
	}
	return 0;
}