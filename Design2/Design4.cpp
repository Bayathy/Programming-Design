#include <iostream>
using namespace std;

class DBL {
    private:
        double d;
    public:
        DBL() {
            d = 0;
        }
        DBL(int i){
            cout << "変換コンストラクタ" << endl;
            d  = i;
        }

        DBL& operator=(int i){
            cout << "代入演算子 int" << endl;
            d = i;
            return *this;
        }

        DBL& operator=(double i){
            cout << "代入演算子 double" << endl;
            d = i;
            return *this;
        }

        operator int(){
            cout << "変換関数int" << endl;
            return d;
        }

        operator double(){
            cout << "変換関数double" << endl;
            return d;
        }
};


int main(){

    DBL dbl1 = 2;
    DBL dbl2 = 2.0;
    int i1 = dbl1;
    dbl2 = i1;
    double d1 = dbl1;
    dbl2 = d1;

    return 0;
}

