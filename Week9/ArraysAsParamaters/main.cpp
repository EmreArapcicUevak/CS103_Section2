#include <iostream>
using namespace std;

void printMyArray(int[], const unsigned int);
void printString(char[]);

int main() {
    int a[] = {1,2,3,4};
    char helloWorld[] = "Hello World!";

    printMyArray(a,4);
    printString(helloWorld);

    return 0;
}

void printMyArray(int array[], const unsigned int size){
    for (unsigned int i = 0; i < size; i++)
        cout << array[i] << ' ';
    cout << endl;
}

void printString(char cString[]){
    for (unsigned int i = 0; cString[i] != '\0'; i++)
        cout << cString[i];
    cout << endl;
}