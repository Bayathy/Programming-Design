#include <iostream>
using namespace std;
int main()
{
    int month, day;
    cout << "�����͉���?";
    cin >> month;
    cout << "�����͉���?";
    cin >> day;

    try
    {    
      if (month < 1 || month > 12) {
        throw "���̓��͒l�����������B";

      }
      if (day < 1 || day > 31) {
        throw "���̓��͒l�����������B";
    }
    }
    catch(const char* err) {
      cout << err << endl;
      return -1;
    }
    cout << "������" << month << "��" << day << "���ł��B" << endl;
}