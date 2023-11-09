#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumber(int min, int max){ // 1, 5
    return min + rand() % (max - min + 1);
}

int main(){
    srand(time(NULL));
    cout << "Range of randomness: " << 0 << " - " << RAND_MAX << endl;
    for (int i = 0; i < 15; i++){
        cout << randomNumber(1,5) << endl;
    }
    return 0;
}
