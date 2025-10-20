#include<stdio.h>
#include<unistd.h>
int main(){
    float doamdat;
    float doamkk;
    float nhietdo;
    printf("He Thong Tuoi Tieu Tu Dong\n");
    printf("____________________________\n");
    while(1){
    printf("\nNhap du lieu thoi tiet:\n");    
    printf("do am cua dat (%) la: ");
    scanf("%f",&doamdat);
    printf("do am cua khong khi(%) la: ");
    scanf("%f",&doamkk);
    printf("nhiet do cua dat (°C) la: ");
    scanf("%f",&nhietdo);
    if (doamdat < 0 || doamdat > 100 || doamkk < 0 || doamkk > 100 || nhietdo < -10 || nhietdo > 60) {
            printf("?? Du lieu khong hop le!\n");
            continue;
        }
    printf("\n Ket qua phan tich??:\n");
    if(doamkk>80){
        printf("troi mua??? -> he thong tat bom \n ");}
        else if(nhietdo>=30 && doamkk>50 && doamdat<40){
            printf("troi nang?? -> he thong bat bom trong 5s \n");
            sleep(5);
        }
        else if(doamdat<35 ){
printf("troi ram?? -> he thong bat bom trong 5s \n ");
sleep(5);
    }else {
        printf("dat du am?? -> tat bom?? \n");
        sleep(10);
        printf("\nHe Thong Bat??\n");
        continue;
        
    }}}
