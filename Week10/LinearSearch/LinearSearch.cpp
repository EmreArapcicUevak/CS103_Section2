/* Implement a program to linearly search through an unsorted array*/
/* Bonus: Implement a binary search on a sorted array*/

#include <iostream>
#include <cstdlib>
using namespace  std;

bool linearSearch(const int [], const unsigned int, const int);
bool binarySearch(const int [], const unsigned int, const int);

int main(){
    int array[6] = {1,2,3,4,5};
    cout << linearSearch(array, 6, 2) << endl;
    cout << binarySearch(array, 6, 5);
    return 0;
}

bool linearSearch(const int array[], const unsigned int size, const int elementToFind){
    for (unsigned int i = 0; i < size; i++)
        if (array[i] == elementToFind)
            return true;
    return false;
}

bool binarySearch(const int arr[], const unsigned int size, const int elementToFind) {
        int left = 0;
        int right = size - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == elementToFind) {
                return true;
            }else if (arr[mid] < elementToFind) {
                left = mid + 1;
            }else {
                right = mid - 1;
            }
        }

        return false;

}
