#include<iostream>
#include<fstream>

using namespace std;

int main() {
    char data[100] = "my data is here";
    ofstream o;
    o.open("somefile.dat");
    o<<data;
}