// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>
int main() {
   float a;
   float b;
   float t;
   int rainsensor=1 ;
  
   printf("He Thong Tuoi Tieu Tu Dong\n");
   // 1= troi mua, 0= troi không mua
   while(1){
   printf("\ndo am cua dat la: \n");
   scanf("%f",&a);
   printf("do am cua khong khi la \n:");
   scanf("%f",&b);
   printf("nhiet do cua dat la: \n");
   scanf("%f",&t);
   if(a<0 || a>100 || b<0  || b>100 || t<-10 || t>60 ){
      printf("Du Lieu Khong Hop Le !");
      sleep(5);
      continue;
      }
   if(a<=30){
       if (t>=30){
           if(b<=50){
               printf("bat he thong tuoi nuoc \n");
               sleep(10);
           }
       }
   }else{
       printf("he thong nghi \n");
       sleep(5);
   }
   
   if(rainsensor == 1){
       printf("troi mua -> he thong ngung hoat dong \n ");
       sleep(10);
    continue;
   }
   }
    return 0;
}

