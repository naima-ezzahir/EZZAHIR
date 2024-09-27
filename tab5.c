#include <stdio.h>

int main() {
    int min;
    int a, b;
    
    printf(" sesir le element de tabeleau : ");
    scanf("%d",&a);
    
    int tab[a];
    
    for (int i=0 ;i<a ;i++){
        printf("Entrer la valeur : ");
        scanf("%d",&b);
        tab[i] =b;
    }
          
    min=tab[0];
    
    for (int i=0 ;i<a ;i++){
          if(min>tab[i]){
            min=tab[i];
          }
          
    }
    printf("le min est %d:",min);
    
    return 0;
}