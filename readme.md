# Number Conversions
<br/>

### Binary To Decimal

```cpp
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
```
<br/>

### Octal To Decimal

```cpp
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
```
<br/>

### Hexadecimal To Decimal

```cpp
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
```
<br/>

### Decimal To Binary

```cpp
int decToBin(int n) {

    int binary = 0, i = 0;

    while ( n != 0 ) {
        binary += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }

    return binary;

}
```
<br/>

### Decimal To Octal

```cpp
int decToOct(int n) {

    int octal = 0, i = 0;

    while ( n != 0 ) {
        octal += (n % 8) * pow(10, i);
        n /= 8;
        i++; 
    }

    return octal;

}
```
<br/>

### Decimal To Hexadecimal

```cpp
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
```