#include<iostream>
#include<fstream>
using namespace std;

int main(int argc , char* argv[]){
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    string str;
    
    while (true)
    {
        getline(in, str);
        out << str << endl;
        if (in.eof())
        {
            break;
        }           
    }

    in.close();
    out.close();
    
    return 0;
}