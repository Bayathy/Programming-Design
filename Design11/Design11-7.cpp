#include<iostream>
#include<string>
using namespace std;

class Pet {
  string name;
  static int petcount;
public:
  Pet(const string& n) {
    name = n;
    petcount++;
  }
  void Name() {
    cout << name << endl;
    petcount--;
  }

  static int TotalPet(){
    return petcount;
  }

};

int main(){}