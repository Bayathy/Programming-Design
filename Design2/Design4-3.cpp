#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void say() = 0;
};

class Human : public Animal {
    public:
        void say() {speak();};
        void speak() { cout << "speak" << endl;}
};

class Dog : public Animal {
    public:
        void say() {bark();};
        void bark() { cout << "bark" << endl;}
};

// Human オブジェクトなら speak, Dog オブジェクトなら bark
void say(Animal* a){
    a->say();
}

int main (){
    Human human;
    Dog dog;
    say(&human);
    say(&dog);
}