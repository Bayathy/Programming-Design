#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
  ifstream infile;
  infile.open("watch.txt");

  string column1, column2;

  cout << "-------------" << endl;

  cout.setf(ios::right, ios::adjustfield);
  cout << "|"<< setw(2)<<"n" << "|" << setw(7) << "s" << "|" << endl;

  while (!infile.eof())
  {
    infile >> column1 >> column2 ;
    cout << "|" << setw(2) << column1 << "|" << setw(7) <<column2 << "|"<< endl;
  }

  cout << "-------------" << endl;
}