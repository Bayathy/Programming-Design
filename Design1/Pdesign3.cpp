#include<iostream>
using namespace std;

class Vector2{
    private:
        int x;
        int y;

    public:
        Vector2(int x =0 , int y = 0){
            this -> x = x;
            this -> y = y;
        }
        void show(){
            cout << "(" << x << "," << y << ")" << endl;
        }
        Vector2 operator++(){return Vector2(++x ,++y);} // 1
        friend  Vector2 operator* (const int& d, const Vector2& v); // 2
        Vector2 operator+(const Vector2& v){return Vector2(x + v.x , y + v.y);} // 3
        Vector2 operator-(){return Vector2(-x ,-y);} // 4
        Vector2 operator* (const int& num){return Vector2(num* x , num* y);}; // 5
        Vector2 operator+(){return *this;} // 6
        int operator*(const Vector2& v){return x*v.x + y*v.y;} // 7
        Vector2 operator++(int dummy){return Vector2(x++ ,y++);} //8
};

Vector2 operator* (const int& d, const Vector2& v){return Vector2(d* v.x , d* v.y);};

int main(){
    Vector2 v1(1,3);
    Vector2 v2(5,2);
    Vector2 v;

    ++v1;
    v = 2 * v1 + (-v1) * (+v2 * v1);
    v++;
    v.show();
}