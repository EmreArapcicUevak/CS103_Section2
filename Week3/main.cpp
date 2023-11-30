#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(double a, double b){
    return;
}

void foo(double a, double b) {
    cout << add(a,b);
    return;
}
int main() {
    cout << add(1,4) << endl;
    foo(4,1);
    return 0;
}