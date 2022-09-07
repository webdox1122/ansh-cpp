#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string a;
    ifstream infile;
    infile.open("mydata.cpp");
    while(getline(infile,a))
    {
        cout<<a<<endl;
    }
    return 0;
}