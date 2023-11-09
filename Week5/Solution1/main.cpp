#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int a = rand();
    cout << a << endl;

    if (a % 2 == 0)
        cout << "Random number is even";
    else
        cout << "Random number is odd";
    return 0;
}