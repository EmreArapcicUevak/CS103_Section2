#include <iostream>
using namespace std;

void insertArrayElements(float array[], const unsigned int size);
double getAverage(const float array[], const unsigned int size);

int main() {
    int n;
    cout << "Enter the number of elements you want to insert: ";
    cin >> n;

    float numbers[n];
    insertArrayElements(numbers,n);
    cout << getAverage(numbers, n);

    return 0;
}

void insertArrayElements(float array[], const unsigned int size){
    for (unsigned int i = 0; i < size; i++){
        cin >> array[i];
    }
}

double getAverage(const float array[], const unsigned int size){
    double sum = 0;
    for (unsigned int i = 0; i < size; i++)
        sum += array[i];

    return sum / size;
}
