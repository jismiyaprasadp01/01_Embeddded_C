/*
Convert an octal number to decimal and vice-versa
http://192.168.2.101/link/226#bkmrk-question%3A-write-func-1
 
Question: Write functions to convert octal to decimal and decimal to octal.
Sample data: Octal input: 17, Decimal input: 15
Expected output: Octal 17 = Decimal 15, Decimal 15 = Octal 17
*/
#include <stdio.h>
#include <math.h>

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

int main()
{
    int octal = 17;
    int decimal = 15;

    printf("Octal %d = Decimal %d\n", octal, octalToDecimal(octal));
    printf("Decimal %d = Octal %d\n", decimal, decimalToOctal(decimal));
}

