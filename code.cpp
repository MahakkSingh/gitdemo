// a cpp code to check if the entered
//  integer is odd or even

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter an integer: " ;
    cin >>n;

    if(n%2==0){
        cout << "the entered integer is even";

    }
    else if (n==0) {
        "oops you entered zero";
    }
    else {
        cout << "the entered integer is odd";
    }

    return 0;

}

