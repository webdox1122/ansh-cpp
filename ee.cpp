#include<iostream>
#include<fstream>

using namespace std;

int main() {
  string line;

  ifstream i;
  i.open("somefile.dat");

  while(getline(i, line)) {
    cout<<line<<endl;
  }

}