#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main(){
  ofstream outfile;
  outfile.open("output.txt");
  stringstream str1;
  str1 << "Department of Electronic and Information Engineering";

  while (!str1.eof()) {
    string text;
    str1 >> text;
    outfile << text << endl;
  }
  
  

  return 0;
}