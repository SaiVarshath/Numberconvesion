#include <iostream>
#include <math.h>
using namespace std;

int decToOct(int n) {

    int octal = 0, i = 0;

    while ( n != 0 ) {
        octal += (n % 8) * pow(10, i);
        n /= 8;
        i++; 
    }

    return octal;

}

int main () {

    cout << decToOct(63) << endl;

    return 0;

}
