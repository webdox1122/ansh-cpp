#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string line;
    ifstream infile;
    infile.open("my data.txt");
    while(getline(infile,line));
    {
        cout<<line;
    }
    return 0;
}