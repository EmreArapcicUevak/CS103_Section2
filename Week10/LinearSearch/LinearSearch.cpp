/* Implement a program to linearly search through an unsorted array*/
/* Bonus: Implement a boolean search on a sorted array*/

#include <iostream>
#include <cstdlib>
using namespace  std;

bool linearSearch(const int [], const unsigned int, const int);

int main(){
    int array[6] = {1,5,4,2,6,1};
    cout << linearSearch(array, 6, 2) << endl;
    cout << linearSearch(array, 6, 9);
    return 0;
}

bool linearSearch(const int array[], const unsigned int size, const int elementToFind){
    for (unsigned int i = 0; i < size; i++)
        if (array[i] == elementToFind)
            return true;
    return false;
}
