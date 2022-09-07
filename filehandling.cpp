#include<iostream>
#include<fstream>

using namespace std;

int main() {
    char data[100];
    ofstream o;
    o.open("somefile.dat");

    cout<<"Enter some data to enter";
    cin.getline(data, 100);
    o<<data;
}