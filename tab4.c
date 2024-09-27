#include <stdio.h>

int main() {
    int max;
    int a, b;
    
    printf(" sesir le element de tabeleau : ");
    scanf("%d",&a);
    
    int tab[a];
    
    for (int i=0 ;i<a ;i++){
        printf("Entrer la valeur : ");
        scanf("%d",&b);
        tab[i] =b;
    }
          
    max=tab[0];
    
    for (int i=0 ;i<a ;i++){
          if(max<tab[i]){
            max=tab[i];
          }
          
    }
    printf("le max est %d:",max);
    
    return 0;
}