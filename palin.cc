#include <iostream> 
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdio>
#include <ctime>
using namespace std;

string to_string (int i){
    std::ostringstream s;
    s << i;
    return s.str();
}
bool is_palindrome(string n){
    string temp = n;
    std::reverse(n.begin(),n.end());
    if (temp==n){
        return true;
    }
    else{
        return false;
    }
}
int next_palindrome(int n){
    for (int i=n+1;i<n*n*n;++i){
        string a = to_string(i);
        if (is_palindrome(a)){
            return i;
        }
    }
}
int main(){
    int calls;
    cin >> calls;
    for (int i=0;i<calls;++i){
        int num;
        cin >> num;
        cout << next_palindrome(num)<<endl;
    }
}