#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Date {
    int month;
    int day;
  public:
    void setMonth(int m) {
      if (month < 1 || month > 12) {
          throw out_of_range("月の入力値がおかしい。");
      }
      month = m;
    }
    void setDay(int d) {
      if (day < 1 || day > 31) {
          throw out_of_range("日の入力値がおかしい。");
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
    catch(exception& e)
    {
      cout << e.what() << endl;
      return -1;
    }
    
    cout << "今日は" << date.format() << "です。" << endl;
    return 0;
}