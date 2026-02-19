/*
Convert a binary number to decimal and vice-versa
http://192.168.2.101/link/226#bkmrk-question%3A-write-func
 
Question: Write functions to convert binary to decimal and decimal to binary.
Sample data: Binary input: 1010, Decimal input: 10
Expected output: Binary 1010 = Decimal 10, Decimal 10 = Binary 1010
*/
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n)
{
    int dec = 0, i = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        dec += rem * pow(2, i);
        n /= 10;
        i++;
    }

    return dec;
}

int decimalToBinary(int n)
{
    int bin = 0, place = 1, rem;

    while(n > 0)
    {
        rem = n % 2;
        bin += rem * place;
        n /= 2;
        place *= 10;
    }

    return bin;
}

int main()
{
    int binary = 1010;
    int decimal = 10;

    printf("Binary %d = Decimal %d\n", binary, binaryToDecimal(binary));
    printf("Decimal %d = Binary %d\n", decimal, decimalToBinary(decimal));
}

