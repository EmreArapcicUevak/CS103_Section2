#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    cout << "Range of randomness: " << 0 << " - " << RAND_MAX << endl;
    int a, n;

    cout << "How many random numbers do you want?\n";
    cin >> n;

    for (int i = 0; i < n; i++) {
        a = rand();
        cout << a << endl;

        if (a % 2 == 0)
            cout << "Random number is even\n";
        else
            cout << "Random number is odd\n";
    }
    return 0;
}
