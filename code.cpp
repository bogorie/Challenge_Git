#include <iostream>
using namespace std;

int mult(int a, int b){
    return a*b;
}

int rest(int a, int b){
    return a-b;
}

int sum(int a, int b){
    return a+b;
}

int main() {
    cout << "Hello, World!";
    int a = 3;
    int b = 2;
    cout << a << "x" << b  << "= " << mult(a,b) << endl;
    cout << a << "-" << b  << "= " << rest(a,b) << endl;
    cout << a << "+" << b  << "= " << sum(a,b) << endl;
    return 0;
}