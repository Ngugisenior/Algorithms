#include <stdio.h>
#include <stdlib.h>

/*
    * Euclid's algorithm is based on applying repeatedly the equality
    * gcd(m,n) = gcd(n, m mod n)
    * untill m mod n is equal to 0
    *
    *
    *
    * Computes gcd(m,n) by Euclid's algorithm
    *
*/
int gcd(int gcd_m, int gcd_n);

int main()
{
    int m,n;
    int result;

    /* Input two nonnegative, not both zero integers m and n */

    printf("Enter First Integer value: \t");
    scanf("%d",&m);
    printf("Enter Second integer value: \t");
    scanf("%d",&n);

    if(n==0){
        result = m;
    }
    else{
        result = gcd(m,n);
    }

    printf("The GCD of m & n is: %d", result);
    return 0;
}
int gcd(int gcd_m, int gcd_n){
    int modulo;

    /*
    *   While gcd_n != 0 do
    *   modulo <-- gcd_m mod gcd_n
    *    gcd_m <-- gcd_n
    *    gcd_n <-- modulo
    */
    do{
        modulo = gcd_m % gcd_n;
        gcd_m = gcd_n;
        gcd_n = modulo;

    }while(gcd_n != 0);

    /* Output: Greatest common divisor of gcd_m and gcd_n */
    return gcd_m; // return gcd_m
}
