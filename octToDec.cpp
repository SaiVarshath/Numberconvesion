#include <iostream>
#include <math.h>
using namespace std;

int octToDec(int n) {

    int decimal = 0, i = 0;

    while ( n != 0 ) {
        int digit = n % 10;
        n /= 10;
        decimal += digit * pow(8, i);
        i++;
    }

    return decimal;

}

int main () {

    cout << octToDec(777) << endl;

    return 0;

}
