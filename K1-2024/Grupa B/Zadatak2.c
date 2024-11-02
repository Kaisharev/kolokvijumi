/*
    Napisati program u programskom
    jeziku C (dozvoljeno je korištenje funkcija samo
    iz stdio.h) koji učitava prirodne brojeve a, b
    (a<b) i k (k≤10), a zatim ispisuje sledeće
    vrednosti: e^a, e^a+0.5, e^a+1... e^b-0.5, e^b.

    Vrednost e^x može da se izračuna
    korištenjem sledeće formule:

    e^x=1+x/1!+x^2/2!+x^3/3!+...+x^n/n!
*/

#include <stdio.h>



int main (void){

    int a,b;
    float e=1.0;

    do
    {
        printf("Unesite brojeve a, b gdje je a<b: ");
        scanf ("%d, %d", &a, &b);
    } while (a<b);
    
    for (float i =a; i<b; i+0.5){

    }
    
}