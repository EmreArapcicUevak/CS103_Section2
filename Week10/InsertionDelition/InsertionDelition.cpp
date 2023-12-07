/* Make a function that allows for insertion and delition of a specific element [deletion = setting to
 * some default value]*/

#include <iostream>
#include <cstdlib>
using namespace std;

void inserElement(int [], const unsigned int, const unsigned int);
void deleteElement(int [], const unsigned int, const unsigned int);

int main(){

    return 0;
}
void inserElement(int array[], const unsigned int size, const unsigned int index){
    if (index >= size)
        cerr << "Invalid Index!";

    cout << "Please enter a value: ";
    cin >> array[index];
}
void deleteElement(int array[], const unsigned int size, const unsigned int index){
    if (index >= size)
        cerr << "Invalid Index!";

    array[index] = 0;
}
