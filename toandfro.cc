#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void printVector(vector<string> v){
    string output = "{";
    for (size_t i=0;i<v.size();i++){
        
        if (i==(v.size()-1)){
            output += v[i] +"}";
        }
        else{
             output += v[i] + ", ";
        }
    }
    cout <<output<<endl;
}
std::vector<std::string> Split(const std::string& str, int splitLength)
{
   int NumSubstrings = str.length() / splitLength;
   std::vector<std::string> ret;

   for (int i = 0; i < NumSubstrings; i++)
   {
        ret.push_back(str.substr(i * splitLength, splitLength));
   }

   // If there are leftover characters, create a shorter item at the end.
   if (str.length() % splitLength != 0)
   {
        ret.push_back(str.substr(splitLength * NumSubstrings));
   }


   return ret;
}
int main(){
    int number;
    while (true){
        cin >> number;
        if (number==0){
            break;
        }
        string text;
        cin >> text;
        vector<string> vec = Split(text, number);
        vector<string> temp;
        int size = vec.size();
        for (int i=0;i<size;++i){
            if ((i==0) || (i%2==0)){
                temp.push_back(vec[i]);
            }
            else{
                string str = vec[i];
                std::reverse(str.begin(), str.end());
                temp.push_back(str);
            }
        }
        vector<string> a;
        for (int i=0;i<number;++i){
            char t[number];
            for (int x=0;x<size;++x){
                t[number] = temp[x].at(i);
                cout << t[number];
            }
            a.push_back(string(t));
        }
        cout <<endl;
    }

    return 0;
    /*
    * Kaching! This problem works! I solved it!
    */
}