#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char msg[10] = "madam";
    char msg1[10];
    
    strcpy(msg1,msg);

    strrev(msg);
    // cout<<msg<<endl;    
    // cout<<msg1<<endl;    

    if (strcmp(msg, msg1) == 0) {
        cout<<"Palindrome";
    }
    else {
        cout<<"Not a Palindrome";
    }




}
