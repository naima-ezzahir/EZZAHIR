#include <stdio.h>

int main() {
   int a , i,n;

    printf(" sesir la taille de tabeleau : ");
    scanf("%d",&a);
    int t[a];
      for(i=0;i<a;i++){
          printf("entre n ");
          scanf("%d",&n);
          t[i]=n;
}
      for(i=0;i<a;i++)
          printf("%d \n",t[i]);
    return 0;
}