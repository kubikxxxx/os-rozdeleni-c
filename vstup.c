#include "vstup.h"

int zadej(){
    int i,count;
    do {
        count=0;
        printf("Zadej:");
        scanf("%d",&i);
        while (getchar()!='\n'){count++;}
        if(count!=0){ printf("\nError!!\n");}
    } while (count!=0||i<0);
    return i;
}
int prvoc() {
    int n;
    int x=0;
    printf("PC rozpozna prvocisla a  vypise delitele\n\n");
    n = zadej();
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            x++;
        }
    }
    if(n==1){return 0;}
    else if (x == 0) { return 1; }
    else { return 0; }
}