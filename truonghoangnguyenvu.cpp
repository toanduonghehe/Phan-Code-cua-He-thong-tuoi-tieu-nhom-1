# include <stdio.h>
#include <unistd.h>

struct DuLieu{
	float NhietDo;
	float DoAmKhongKhi;
	float DoAmDat;
};

typedef struct DuLieu Dl;

Dl DocDuLieu(){
	Dl x;
	printf("=== NHAP DU LIEU THOI TIET ===\n");
	printf("Nhap nhiet do ( do C): ");
	scanf("%f", &x.NhietDo);
	
	printf("Nhap do am khong khi (%): ");
	scanf("%f", &x.DoAmKhongKhi);
	
	printf("Nhap do am dat (%): ");
	scanf("%f", &x.DoAmDat);
	
	return x;
}

void ThoiTiet(Dl s){
	
	 printf("\n=== KET QUA PHAN TICH ===\n");
	 
	if(s.DoAmDat >80){
        printf("\ntroi mua -> he thong tat bom \n ");
        }else if (s.NhietDo >= 30 && s.DoAmKhongKhi > 50 && s.DoAmDat < 40){
            printf("\ntroi nang -> he thong bat bom trong 5s \n");
         sleep(5);   
        }
        else if(s.DoAmDat < 35 ){
    printf("\ntroi ram -> he thong bat bom trong 5s \n ");
sleep(5);
    }else {
        printf("dat du am -> tat bom \n");
	}
}


int main(){
	Dl x;             
    x = DocDuLieu();  
    ThoiTiet(x);     
    return 0;
}
