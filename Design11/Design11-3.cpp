#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
  ifstream infile;
  infile.open("data.txt");
  
  string x;

  getline(infile, x);

  cout << x ;

  infile.close();

  return 0;
}