/* Make a function to reverse your array */
#include <iostream>
#include <cstdlib>
using namespace std;

void reverseArray(int [], const unsigned int);

int main(){
    int array[5] = {1,2,3,4,5};
    reverseArray(array,5);

    for (unsigned int i = 0; i < 5; i++)
        cout << array[i] << endl;
    return 0;
}

void reverseArray(int array[], const unsigned int size){
    for (unsigned int i = 0; i < size/2; i++)
        swap(array[i], array[size-1-i]);
}


