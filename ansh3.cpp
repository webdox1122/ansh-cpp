#include<iostream>
#include<fstream>
#include"mydata.cpp"

using namespace std;

int main(){
    string a;
    ifstream infile;
    infile.open("mydata.cpp");
    while(getline(infile,a))
{
    cout<<a;
}
}