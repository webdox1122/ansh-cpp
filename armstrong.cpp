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
    else {
        cout<<temp<<" is Not an armstrong number"<<endl;
    }

}

int main() {


   
    checkArm(370);   // function call
    checkArm(371);   // function call
    checkArm(372);   // function call
    checkArm(373);   // function call
    return 0;
}