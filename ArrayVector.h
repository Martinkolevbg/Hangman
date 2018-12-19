#ifndef ARRAYVECTOR_H
#define ARRAYVECTOR_H


#include <iostream>

using namespace std;


typedef string Elem;

class ArrayVector{

public:
    ArrayVector();
    void print();
    int size() const;
    bool empty() const;
    Elem& operator [ ] (int i);
    Elem& at(int i);
    void erace (int i);
    void insert (int i, const Elem& e);
    void reverse(int N);
    void resize();
    void push_back(Elem& e);
private:
    int n;
    int capacity;
    Elem* A;
};


#endif // ARRAYVECTOR_H
