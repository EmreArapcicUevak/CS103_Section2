#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandomNumber(int min, int max){
    return min + rand() % (max - min + 1);
}

void fillArrayWithRandomValues(int array[], const unsigned int size){
    for (unsigned int i = 0; i < size; i++)
        array[i] = getRandomNumber(0,100);
}

void printArray(const int array[], const unsigned int size){
    for (unsigned int i = 0; i < size; i++)
        cout << array[i] << " ";
}

int getMax(const int array[], const unsigned int size){
    if (size > 0) {
        int max = array[0];

        for (unsigned int i = 1; i < size; i++)
            if (array[i] > max)
                max = array[i];

        return max;
    }else
        cerr << "Size is 0, no max value available";
}

int getMin(const int array[], const unsigned int size){
    if (size > 0) {
        int min = array[0];

        for (unsigned int i = 1; i < size; i++)
            if (array[i] < min)
                min = array[i];

        return min;
    }else
    cerr << "Size is 0, no min value available";
}

int main() {
    srand(time(NULL));
    int array[5];
    fillArrayWithRandomValues(array,5);
    cout << "Array is: [ ";
    printArray(array, 5);
    cout << " ]" << endl;
    cout << "Max elements in the array is: " << getMax(array,5) << endl;
    cout << "Min elements in the array is: " << getMin(array,5) << endl;
    return 0;
}

