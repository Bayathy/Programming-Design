#include<fstream>
#include<iostream>
using namespace std;

int main(){
  ofstream outfile;
  outfile.open("data.txt");

  double dnum;

  cin >> dnum;

  outfile << dnum;

  outfile.close();
}