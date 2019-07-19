#include <iostream>
using namespace std;

int rest(int a, int b){
    return a-b;
}

int main() {
    cout << "Hello, World!";
    int a = 3;
    int b = 2;
    cout << a << "-" << b  << "= " << rest(a,b) << endl;
    return 0;
}