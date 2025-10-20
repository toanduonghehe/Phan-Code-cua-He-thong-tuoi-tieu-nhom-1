#include <stdio.h>
#include <string.h>
#include <unistd.h>
 typedef struct {
	float doamdat;
    float doamkk;
	float nhietdo;
}Datasheet;
   const char* Phanloaithoitiet(Datasheet d)
   {if (d.doamdat > 80) {
	return "Mua";}
	else if (d.doamkk >50 && d.nhietdo >=30 && d.doamdat < 40) {
	return "Nang";}
	else if (d.doamdat <35 ) {
	return "Ram";}
	else {return "Dat du am";}}
	void Dieukhienbom (Datasheet d)
	{const char* Thoitiet=Phanloaithoitiet(d);
	printf("Thoi tiet hien tai= %s\n", Thoitiet);
	if(strcmp(Thoitiet,"Mua")==0) {printf("\nTroi mua--> he thong tat bom");}
	else if(strcmp(Thoitiet, "Nang")==0) {printf("\nTroi nang--> He thong bat bom trong 5s");
	sleep(5);}
	else if(strcmp(Thoitiet, "Ram")==0) {printf("\nTroi ram--> He thong bat bom trong 5s");
	sleep(5);
	}
	else {printf("\nDat du am-->He thong tat bom");}}
	int main () {while (1){ printf("He thong tuoi tieu tu dong\n");
	
	Datasheet d;
	printf("\nNhap do am dat ( % ): ");
	scanf("%f", &d.doamdat);
	printf("\nNhap do am khong khi ( % ): ");
	scanf("%f", &d.doamkk);
	printf("\nNhap nhiet do (°C): ");
	scanf("%f", &d.nhietdo);
	Dieukhienbom(d);
	return 0;}
	}
	

