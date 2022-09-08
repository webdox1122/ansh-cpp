#include<iostream>
using namespace std;

// 123     321
int main() {
    int n = 123;
    int rem;
    int rev = 0;
    
    while(n > 0) {
        rem = n % 10;       // 3 2   1
        rev = rev * 10 + rem;    // 3   32    321
        n = n / 10;  // 12   1   0
    }

    cout<<rev;



}