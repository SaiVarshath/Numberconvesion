#include <iostream>
#include <math.h>
using namespace std;

int hexToDec( string n ) {

    int decimal = 0, s = n.size(), x = 0;

    for ( int i = s-1; i >= 0; i-- ) {

        if ( n[i] >= '0' && n[i] <= '9' ) 
            decimal += (n[i] - '0') * pow(16, x);

        else if ( n[i] >= 'A' && n[i] <= 'F' ) 
            decimal += (n[i] - 'A' + 10) * pow(16, x);

        x++;

    }

    return decimal;

}

int main () {

    cout << hexToDec("1CF") << endl;

    return 0;

}
