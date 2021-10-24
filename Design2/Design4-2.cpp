#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void say() = 0;
};

class Human : public Animal {
    public:
        void say() {}
        void speak() { cout << "speak" << endl;}
};

class Dog : public Animal {
    public:
        void say() {}
        void bark() { cout << "bark" << endl;}
};

// Human オブジェクトなら speak, Dog オブジェクトなら bark
void say(Animal* a){
    Human* human = dynamic_cast<Human*>(a);
    Dog* dog = dynamic_cast<Dog*>(a);

    if (human)
        human->speak();
    if (dog)
        dog->bark();
}

int main (){
    Human human;
    Dog dog;
    say(&human);
    say(&dog);
}



