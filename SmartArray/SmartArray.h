// SmartArray.h
#ifndef SMARTARRAY.H
#define SMARTARRAY.H

#include <stdexcept>
#include "iostream"
#include <cassert>
#include <initializer_list>
template <typename T>
class SmartArray {
private:
    T* data;
    unsigned int size;
public:
    SmartArray() : data(nullptr), size(0) {}
    SmartArray(unsigned int size) {
        assert(size > 0);
        this->size = size;
        data = new T[size];
    }
    SmartArray(const SmartArray<T>& Array) {
        size = Array.size;
        data = new T[size];

        for (unsigned int i = 0; i < Array.size; i++)
            data[i] = Array[i];
    }

    ~SmartArray() {
        if (data != nullptr)
            delete[] data;
    }

    const unsigned int getSize() {return this->size;}

    T& operator[] (unsigned int index){
        assert(index < size);
        return data[index];
    }

    SmartArray& operator+ (const SmartArray<T>& concatinateWith){
        SmartArray<T> resultingArray = new SmartArray<T>(this->getSize() + concatinateWith.getSize());

        for (unsigned  int i = 0; i < this->getSize(); i++)
            resultingArray[i] = this[i];

        for (unsigned  int i = 0; i < concatinateWith->getSize(); i++)
            resultingArray[i + this->getSize()] = concatinateWith[i];

        return resultingArray;
    }

    friend std::ostream& operator<<(std::ostream& os, SmartArray<T>& array) {
        for (unsigned  int i = 0; i < array.getSize()-1; i++)
            os << array[i] << ", ";
        os << array[array.getSize()-1] << std::endl;

        return os;
    }

    // Disable assignment operator to avoid memory issues
    SmartArray<T>& operator=(std::initializer_list<T> ilist) {
        // First, check that the initializer_list is not larger than the array
        assert(static_cast<int>(ilist.size()) == size);
        
        // Copy elements from initializer list to the SmartArray
        std::copy(ilist.begin(), ilist.end(), data);
        return *this;
    }
};

#endif