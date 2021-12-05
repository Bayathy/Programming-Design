// to_string: string 型への変換 (c++11 以降)
// g++ -std=c++11 file.cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
  int month;
  int day;
public:
  void setMonth(int m) {
    if (month < 1 || month > 12) {
        throw "月の入力値がおかしい。";
    }
    month = m;
  }
  void setDay(int d) {
    if (day < 1 || day > 31) {
        throw "日の入力値がおかしい。";
      }
    day = d;
  }
  string format() {
    return to_string(month) + "月" + to_string(day) + "日";
  }
};

int main()
{
    Date date;
    int month, day;
    cout << "今月は何月? ";
    cin >> month;
    cout << "今日は何日? ";
    cin >> day;
    try
    {
      date.setMonth(month);
      date.setDay(day);
    }
    catch(const char* err)
    {
      cout << err << endl;
      return -1;
    }
    
    date.setMonth(month);
    date.setDay(day);
    cout << "今日は" << date.format() << "です。" << endl;
    return 0;
}