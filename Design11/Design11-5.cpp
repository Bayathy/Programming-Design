#include <iostream>
using namespace std;

class Point {
    double x, y, z;
  public:
    Point(): x(0),y(0),z(0){};
    friend istream& operator>>(istream& i, Point& p){
      i >> p.x >> p.y >> p.z;
      return i;
    }

    friend ostream& operator<<(ostream& o, Point& p) {
      o << p.x << ' ' << p.y << ' ' << p.z;
      return o;
    }
};



int main(){
  Point p;
  cout << "入力: ";
  cin >> p;
  cout << "出力: " << p << endl;
}