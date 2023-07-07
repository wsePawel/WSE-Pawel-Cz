#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba,n , m, r, bin[12], k;
    printf("Podaj liczbe do konwersji: ");
    scanf ("%d", &liczba);
m = liczba;
k=0;
    do {
        n=m/2;
        r= m - n * 2 ;
        bin[k] =r;
        k = k + 1;
        m=n;
    } while(m  > 0);
    printf("\nLiczba dzieisietna: %d, liczba binarna: ", liczba);
    for(n=k-1; n>=0; n = n -1)
        printf("%d", bin[n]);
    printf("\n\n");
    return 0;
}
