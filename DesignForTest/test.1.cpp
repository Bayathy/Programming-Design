#include<iostream>
using namespace std;

class Complex {
    private:
        double re; // 実部
        double im; // 虚部
    public:
        Complex(double re = 0, double im = 0 ) {
            this->re = re;
            this->im = im;
        }
        void show() {
            cout << re << "+" << im << "i" << endl;
        }
        
        Complex operator*(const Complex& num){
            return Complex(re * num.re , -1 * im * num.re);
        } 

        Complex operator/(double num){
            return Complex(re /num,im /num);
        }
        
        Complex operator/(const Complex& num){{
            return()
        }}
};

int main()
{
    Complex c1(1.1, 2.2);
    Complex c2(-4.0, 0.5);
    Complex c;
    c = 1.2 + c1 * 3.4 – 0.1 * c1 * c2 / c1 + (-c2 / 5.6 + 7.8);
    c++;
    c.show();
}