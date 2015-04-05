#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
string LongToString (long long a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}
int result(long long n){
    string s = LongToString(n);
    int length = s.length();
    int sum = 0;
    for (int i=0;i<length;++i){
        char c = s.at(i);
        int n = c - '0';
        sum += n*n;
    }
    return sum;
}

int main(){
    long long number;
    cin >> number;
    vector<int> holder;
    int count = 0;
    int value = number;
    while (value!=1){
        count++;
        value = result(value);
        if (std::binary_search(holder.begin(), holder.end(), value)){
            count = -1;
            break;
        }
        holder.push_back(value);

    }
    cout << count <<endl;;
    return 0;
    //Solved it! C++ rocks!
}