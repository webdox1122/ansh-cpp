#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string a;
    ifstream infile;
    infile.open("my data.txt");
    while(getline(infile,a))
{
    cout<<a;
}
}