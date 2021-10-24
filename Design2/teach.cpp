#include <iostream>
using namespace std;

int main(){
    char fruits[5][128] = {"Apple","Banana","Cherry","Grape","Orange"};

    int price[5] = {100, 300 , 500 , 600 , 150};

    int select[3];

    for (size_t i = 0; i < 3; i++)
    {
        cin >> select[i];
    }
    cout << endl;
    
    int total =0;

    for (int i = 0; i < 3; i++){
        cout << select[i] << ' ' << ':';
        int num = select[i] -1;
        cout << fruits[num] << ' ' << ':';
        cout << price[num] << ' ' << "yen" <<endl;
        total += price[num];
    }
    cout << "Tortal:" << ' ' <<total << ' ' << "yen";

    return 0;   
}