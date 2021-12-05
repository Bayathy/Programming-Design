#include<iostream>
using namespace std;

template<class T>
class Point {
        T x;
        T y;
    public:
        Point();
        Point(T x, T y);
        void set(T x, T y);
        T getx();
        T gety();
};

template<class T>
Point<T>::Point(){
    x = 0;
    y = 0;
}

template<class T>
Point<T>::Point(T x, T y){
    this->x = x;
    this->y = y;
}

template<class T>
void Point<T>::set(T x, T y){
    this->x = x;
    this->y = y;
}

template<class T>
T Point<T>::getx(){
    return x;
}

template<class T>
T Point<T>::gety(){
    return y;
}

int main(){
    Point<int> p1(1, 2);
    Point<int> p2;

    cout << p1.getx() << "," << p1.gety() << endl;
    return 0;
}