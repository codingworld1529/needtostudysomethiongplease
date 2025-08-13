#include<stdio.h>
  int main() {
    char a;
    printf("Enter the colour: \n");
    scanf("%c",&a);
     if(a == 'R' || a == 'r'){
        printf("stop!!\n");
     } else if (a =='Y' || a == 'y') {
        printf("slow down!\n");
     }else if (a == 'G' || a == 'g'){
        printf("Go!\n");
     } else {
      printf("invalid colour");
     }return 0;
}  