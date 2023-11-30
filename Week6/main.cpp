#include <iostream>
using namespace std;
void Func(int x){
    if (x > 0){
        Func(x-1);
        cout << x;
    }
}
// Func(3) -> Func(2) 3 x
// Func(2) -> Func(1) 2 x
// Func(1) -> Func(0) 1 x
// Func(0) X

int main() {
    Func(3);
    return 0;
}