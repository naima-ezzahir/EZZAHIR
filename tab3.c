#include <stdio.h>

int main() {
    int a;
    int b;
    int s=0;
    int tab[s];
    printf(" entrer un nomber a : ");
    scanf("%d",&a);
     printf(" entrer un nomber b : ");
    scanf("%d",&b);
    s=a+b;
    printf(" la somme est %d:" ,s);
    for( int i=0;i<s;i++){
          s=s+tab[i];
          printf("%d\n",i,tab[i]);
        
    }
           

    return 0;
}