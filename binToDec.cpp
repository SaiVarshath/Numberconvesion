#include <iostream>
#include <math.h>
using namespace std;

int binToDec(int n) {

    int decimal = 0, i = 0;

    while ( n != 0 ) {

        int digit = n % 10;
        n /= 10;
        decimal += digit * pow(2, i);
        i++;

    }

    return decimal;

}

int main () {

    cout << binToDec(111111111) << endl;

    return 0;

}
