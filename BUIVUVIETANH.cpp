#include <stdio.h>
#include <string.h>
#include <unistd.h>   

typedef struct {
    float nhietDo;          
    float doAmKhongKhi;     
    float doAmDat;         
} DataSheet;


const char* xacDinhThoiTiet(DataSheet d) {
    if (d.doAmKhongKhi > 80) {
        return "Mua";  
    } else if (d.nhietDo >= 30 && d.doAmKhongKhi < 50) {
        return "Nang"; 
    } else {
        return "Ram";   
    }
}


void dieuKhienBom(DataSheet d) {
    const char* thoiTiet = xacDinhThoiTiet(d);
    printf("\nThoi tiet hien tai: %s\n", thoiTiet);
    printf("Nhiet do: %.1fC | Do am khong khi: %.1f%% | Do am dat: %.1f%%\n", 
           d.nhietDo, d.doAmKhongKhi, d.doAmDat);

    if (strcmp(thoiTiet, "Mua") == 0) {
        printf("Troi mua -> Tat bom, khong can tuoi.\n");
    } 
    else if (strcmp(thoiTiet, "Nang") == 0 && d.doAmDat < 40) {
        printf("Troi nang va dat kho -> Bat bom tuoi trong 5 giay...\n");
        sleep(5);
        printf("Tat bom.\n");
    } 
    else if (strcmp(thoiTiet, "Ram") == 0 && d.doAmDat < 35) {
        printf("Troi ram nhung dat van kho -> Bat bom tuoi trong 5 giay...\n");
        sleep(5);
        printf("Tat bom.\n");
    } 
    else {
        printf("Do am dat du -> Tat bom.\n");
    }
}

int main() {
    DataSheet d;
    printf("=== HE THONG TUOI CAY TU DONG ===\n");

    while (1) {
        printf("\nNhap nhiet do khong khi (C): ");
        scanf("%f", &d.nhietDo);
        printf("Nhap do am khong khi (%%): ");
        scanf("%f", &d.doAmKhongKhi);
        printf("Nhap do am dat (%%): ");
        scanf("%f", &d.doAmDat);

        dieuKhienBom(d);

        printf("\n--- Cho 10 giay truoc khi doc du lieu moi ---\n");
        sleep(10);  
    }

    return 0;
}







   

