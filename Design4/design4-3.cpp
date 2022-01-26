#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<unsigned char>str;
    char letter[]="program";
    for (int i =0; i<8; i++)
    {
        str.push_back(letter[i]);
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }

    cout << find(str.begin(),str.end(),'r');

    

    return 0;
    
    
}