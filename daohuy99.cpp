// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float a;
   float b;
   float t;
   int rainsensor=1 ;
   // 1= troi mua, 0= troi không mua
   printf("do am cua dat la: \n");
   scanf("%f",&a);
   printf("do am cua khong khi la \n:");
   scanf("%f",&b);
   printf("nhiet do cua dat la: \n");
   scanf("%f",&t);
   if(a<=30){
       if (t>=30){
           if(b<=50){
               printf("bat he thong tuoi nuoc \n");
           }
       }
   }else{
       printf("he thong nghi \n");
   }
   
   if(rainsensor == 1){
       printf("troi mua -> he thong ngung hoat dong \n ");
       
   }
    return 0;
}
