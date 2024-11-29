#include <iostream>
#include <math.h>
using namespace std;

string decToHex(int n) {

    string hexadecimal = "";
    int i = 0;
    char c;

    while ( pow(16, i) < n ) i++;
    i -= 1;

    while( n != 0 ) {

        int pow16 = pow(16, i);
        int digit = n / pow16;
        n %= pow16;

        if ( digit > 9 ) c = digit + 55; 
        else c = digit + 48;

        hexadecimal.push_back(c);

        i--;

    }

    return hexadecimal;

}

int main () {

    cout << decToHex(495) << endl;
    
    return 0;

}
