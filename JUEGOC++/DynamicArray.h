#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>

using namespace std;

template<typename T>
class DynamicArray;

template<typename T>
class DynamicArray
{
    public:
        DynamicArray();
        DynamicArray(const T pts[], const int size);
        DynamicArray(DynamicArray &o);
        ~DynamicArray();

        
        void print();
        int getSize() const;
		
        void clear();
		void push_back(const T &p);
		void insert(const int, const T &);
		void remove(const int);

    private:
        int size;
        T *elems;
		void resize(int);
};

template<typename T>
DynamicArray<T>::DynamicArray()
{
    this->size = 0;
    this->elems = new T[size];
}

template<typename T>
DynamicArray<T>::DynamicArray(const T pts[], const int size) {
    this->size = size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = pts[i];
}

template<typename T>
DynamicArray<T>::DynamicArray(DynamicArray &o){
    this->size = o.size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = o.elems[i];
}

template<typename T>
int DynamicArray<T>::getSize() const{
    return size;
}

template<typename T>
void DynamicArray<T>::resize(int newSize){
	T *pts = new T[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		pts[i] = elems[i];
	delete[] elems;
	size = newSize;
	elems = pts;
}

template<typename T>
void DynamicArray<T>::clear() {
	resize(0);
}

template<typename T>
void DynamicArray<T>::push_back(const T &p) {
	resize(size+1);
	elems[size-1] = p;
}

template<typename T>
void DynamicArray<T>::insert(const int pos, const T &p) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		elems[i] = elems[i-1];
	elems[pos] = p;
}

template<typename T>
void DynamicArray<T>::remove(const int pos) {
	if (pos >= 0 && pos < size)
    {
        for (size_t i = pos; i < size; i++)
        {
            elems[i] = elems[i+1];
        }
        resize(size-1);
    }
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] elems;
}


#endif
