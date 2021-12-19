#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  string str1;
  string str2 = "Program Design";
  string str3;

  cin >> str1;
  reverse(str1.begin(), str1.end());
  cout << str1 << endl;

  str3 = str1 + str2;

  cout << str3;

  return 0;
}