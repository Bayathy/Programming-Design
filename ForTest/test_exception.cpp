#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
    int* vec;
    size_t size;
public:
    Vector() {
        vec = nullptr;
        size = 0;
    }
    Vector(int n){
        if(n <= 0){
            throw bad_alloc();
        }
        vec = new int[n];
    } // n 次元ベクトル

    Vector operator+ (const Vector& v){
        if(size != v.size){
            throw invalid_argument("ベクトルの次元が異なっています");
        }
        Vector tmp(size);
        for(unsigned i = 0 ; i<size; i++){
            tmp.vec[i] = vec[i] + v.vec[i];
        }
        return tmp;
    }
    Vector operator= (const Vector& v){
        if(this != &v){
            delete[] vec;
            size = v.size;
            vec = new int[size];
            for (unsigned i = 0; i < size ; i++)
                vec[i] = v.vec[i];
        }
        return *this;
    }

    Vector operator[] (unsigned i){
        if(size < i)
            throw out_of_range("添字が範囲外です");
        return vec[i];
    }
};


int main()
{
    Vector a;
    Vector b(4);
    Vector c(3);
    for (int i = 0; i < 4; i++) {
        b[i] = i;
        c[i] = i;
    }
    a = b + c;
}