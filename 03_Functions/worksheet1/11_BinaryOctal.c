/*
Convert a binary number to octal and vice-versa
http://192.168.2.101/link/226#bkmrk-question%3A-write-func-2
 
Question: Write functions to convert binary to octal and octal to binary.
Sample data: Binary input: 110011, Octal input: 63
Expected output: Binary 110011 = Octal 63, Octal 63 = Binary 110011
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

int decimalToOctal(int n)
{
    int oct = 0, place = 1, rem;

    while(n > 0)
    {
        rem = n % 8;
        oct += rem * place;
        n /= 8;
        place *= 10;
    }

    return oct;
}

int octalToDecimal(int n)
{
    int dec = 0, i = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        dec += rem * pow(8, i);
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
    int binary = 110011;
    int octal = 63;

    int dec1 = binaryToDecimal(binary);
    int dec2 = octalToDecimal(octal);

    printf("Binary %d = Octal %d\n", binary, decimalToOctal(dec1));
    printf("Octal %d = Binary %d\n", octal, decimalToBinary(dec2));
}

