#include <iostream>
using namespace std;

class Occupation {
    public:
        int exp;
};

class Fighter : public Occupation{
    public:
        void slash() { cout << "slash" << endl;}
};

class Mage : public Occupation{
    public:
        void castSpell() { cout << "attack spell" << endl;}
};

class Priest : public Occupation{
    public:
        void castSpell() { cout << "cure spell" << endl;}
};

class Thief : public Occupation{
    public:
        void release() { cout << "release" << endl;}
};

class Bishop : public Priest , public Mage{};

class Samurai : public Fighter , public Mage{};

class Load : public Fighter , public Bishop{};

class Ninja : public Fighter , public Thief{};


int main(){
    Fighter Chris;
    Bishop John;
    Ninja Cathy;

    Chris.slash();
    Chris.exp += 10;

    John.Mage::castSpell();
    John.Priest::exp+=10;
    John.Mage::exp+=10;

    Cathy.release();
    Cathy.Fighter::exp+=10;
    Cathy.Thief::exp+=10;

    return 0;
}