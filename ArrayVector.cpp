#include "ArrayVector.h"

typedef string Elem;
ArrayVector::ArrayVector(){
 capacity = 0;
 n = 0;
 A= NULL;
}

int ArrayVector::size() const { return n;}

bool ArrayVector::empty() const {return size() == 0;}

Elem& ArrayVector::operator[](int i){ return A[i];}

Elem& ArrayVector::at(int i){
    if(i<0 || i >= n){
        cout << "Invalid Index";
    }
    return A[i];
}

void ArrayVector::erace(int i){
    for(int j =i+1;j< n ; j++){
        A[j-1] = A[j];
        n--;
    }
}

void ArrayVector::reverse(int N){
    if (capacity >= N){ return;}
    Elem* B = new Elem[N];

    for (int j =0; j < n; j++){
        B[j] = A[j];
    }
    if(A != NULL){
        delete [] A;
    }
    A = B;
    capacity = N;
}

void ArrayVector::insert(int i, const Elem& e){
    if (n >= capacity){reverse(max(1, 2 * capacity));}

    for(int j = n-1;j>=i;j--){
        A[j+1]= A[j];

    }
    A[i]= e;
    n++;
}
void ArrayVector::print(){
    int index = 0;

    while(index < size()){
        cout << A[index] << " ";
        index++;
    }
    cout<<endl;
}
void ArrayVector::resize(){
    if(!capacity){
        capacity+=1;
        A = new Elem[capacity];
    }
    else{
        capacity *= 2;
        Elem* b = new Elem[capacity];
        for(unsigned i=0;i<capacity/2;i++){
            b[i] = A[i];
        }
        delete[] A ;
        A=b;
        delete[] b;
    }
}

void ArrayVector::push_back(Elem& e){
    if(capacity <n+1) resize();
    insert(n,e);
}
