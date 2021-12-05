#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    vector<unsigned char> str;

    char letter[] = "program";

    for(int i = 0; letter[i] != '\0';i++)
        str.push_back(str[i]);

    cout << str.size() << endl;

    cout << distance(str.begin(), find(str.begin(), str.end(), 'r')) << endl;

    sort(str.begin(), str.end());

    for(vector<unsigned char>::iterator it = str.begin(); it != str.end(); it++)
        cout << *it ;

    return 0;
}