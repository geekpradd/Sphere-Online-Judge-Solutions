#include <iostream> 
#define max 100000
using namespace std;
int multiply_array(int array[],int size, int n);
void print_factorial(int n){
    int number[max];
    int size = 1;
    number[0] = 1;
    for (int i=2;i<=n;++i){
        size = multiply_array(number, size, i);
    }
    /*
    We will print below. Multiplication takes place in a separate function
    */
    for (int i=size-1;i>=0;--i){
        cout << number[i];
    }
    cout<<endl;
}
int multiply_array(int array[],int size, int n){
    int carry = 0;
    for (int i=0;i<size;++i){
        int temp = n*array[i] + carry;
        array[i] = temp % 10;
        carry = (temp-array[i])/10;
    }
    while (carry){
        array[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}
int main(){
    int cases;
    cin >> cases;
    for (int a=0;a<cases;++a){
        int num;
        cin >> num;
        print_factorial(num);
    }
    
    return 0;
}