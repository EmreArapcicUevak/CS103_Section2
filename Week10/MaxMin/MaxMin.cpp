/* Make a function one for returning the max element in an Array and one for returning the minimum*/
#include <iostream>
#include <cstdlib>
using namespace  std;

int getMax(const int [], const unsigned int);
int getMin(const int [], const unsigned int);

int main(){
    int arr[] = {1,5,3,4,1};

    printf("Max element of the array is %d\n", getMax(arr,5));
    printf("Min element of the array is %d\n", getMin(arr,5));
    return 0;
}

int getMax(const int array[], const unsigned int size){
    int max = array[0];
    for (unsigned int i = 1; i < size; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

int getMin(const int array[], const unsigned int size){
    int min = array[0];
    for (unsigned int i = 1; i < size; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}