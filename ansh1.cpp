#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // write to a file 
    char data[100];
    ofstream ofile;
    ofile.open("mydata.cpp",ios::app);
    cout<<"enter some data";
    // cin>>data;
    cin.getline(data,100);
    ofile<<data<<endl;
    ofile.close();
}