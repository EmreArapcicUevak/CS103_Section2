#include <iostream>
using namespace std;

int main() {
    int a[5]; // type name[size]

    for (int index = 0; index < 5; index++){
        cin >> a[index]; // Inputing into an array
    }


    for (int index = 0; index < 5; index++){
        cout << a[index] << endl; // outputing from an array
    }

    a[0] = 44; // accessing specific elements
    return 0;
}