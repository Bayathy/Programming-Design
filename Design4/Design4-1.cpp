#include <iostream>
using namespace std;

template<class T>
class Point {
        T x;
    T y;
    public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(T x, T y) {
        set(x, y);
    }
    void set(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T getx() {
        return x;
    }
    T gety() {
        return y;
    }
};

int main()
{
    Point<int> p1(1, 2);
    Point<int> p2;
    cout << p1.getx() << "," << p1.gety() << endl;
}
