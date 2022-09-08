#include<iostream>

using namespace std;

int main() {
    int n = 376;
    int rem;
    int d = 0;
    int temp = n;
    while(n > 0) {
        rem = n % 10;
        d = d + (rem * rem * rem);
        n = n / 10;
    }  

    if (temp == d) {
        cout<<"Armstrong number";
    }
    else {
        cout<<"Not an armstrong number";
    }

    return 0;
}