#include "ArrayList.h"

template <typename T>
ArrayList::ArrayList() {
    capacity = 10;
    lastElementIndex = -1;
    array = new T[10];
}

template <typename T>
T ArrayList::get(int index) {
    if (index <= lastElementIndex && index >= 0) {
        return array[index];
    }
    throw exception("This element does not exist.");
}

template <typename T>
void ArrayList::update(int index, T value) {
    if (index <= lastElementIndex && index >= 0) {
        array[index] = value;
    }
    throw exception("This element does not exist.");
}

template <typename T>
T ArrayList::remove() {
   if (lastElementIndex >= 0) {
       T element = array[lastElementIndex];
       array[lastElementIndex] = null;
       lastElementIndex--;
       return element;
   } 
   throw exception("The list is empty.");
}

template <typename T> 
void ArrayList::append(T value) {
    if (capacity > lastElementIndex+1) {//not full yet
        lastElementIndex++;
        capacity[lastElementIndex] = value;
    } else {//double capacity
        int newCapacity = 2*capacity;
        int* newArray = new T[newCapacity];
        for (int i=0; i<=lastElementIndex; i++) {
            newArray[i] = array[i];
        }
        lastElementIndex++;
        newArray[lastElementIndex] = value;
        delete[] array;
        array = newArray;
        capacity = newCapacity;
    }
}

int ArrayList::size() {
    return lastElementIndex+1;
}