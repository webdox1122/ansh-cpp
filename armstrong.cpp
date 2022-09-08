#include<iostream>

using namespace std;

// function definition
void checkArm(int n) {
    int d = 0;
    int temp = n;
    int rem;

    while(n > 0) {
        rem = n % 10;
        d = d + (rem * rem * rem);
        n = n / 10;
    }  

    if (temp == d) {
        cout<<temp<<" is an Armstrong number"<<endl;
    }
 

}

int main() {

    for (int i=0; i < 500; i++) {
        checkArm(i);
    }
   
  
    return 0;
}