#include <iostream>
#include <math.h>
using namespace std;

int decToBin(int n) {

    int binary = 0, i = 0;

    while ( n != 0 ) {
        binary += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }

    return binary;

}

int main () {

    cout << decToBin(7) << endl;

    return 0;

}
