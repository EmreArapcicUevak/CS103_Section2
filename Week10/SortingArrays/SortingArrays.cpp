/* Make a sorthing algorithm (any) and a function which implements the sorthing algorithm to sort
 * an array given to it*/

#include "iostream"
using namespace  std;

void bubbleSort(int [], const unsigned int);

int main(){
    int arr[5] = {1,2,6,0,3};
    bubbleSort(arr,5);

    for (unsigned int i = 0; i < 5; i++)
        cout << arr[i] << endl;
    return 0;
}

void bubbleSort(int array[], const unsigned int size){
    bool sorting = true;
    while (sorting){
        sorting = false;
        for (unsigned int i = 0; i < size-1; i++)
            if (array[i] > array[i+1]) {
                swap(array[i], array[i + 1]);
                sorting = true;
            }
    }
}
