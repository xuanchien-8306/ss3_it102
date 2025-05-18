#include <stdio.h>

int main(){
	float a;
	float b;
	float c;
	float tong;
	float trungbinh;
	printf("Nhap diem toan: ");
	scanf("%f", &a);
	printf("Nhap diem van: ");
	scanf("%f", &b);
	printf("Nhap diem anh: ");
	scanf("%f", &c);
	tong = a+b+c;
	trungbinh = tong / 3;
	printf("Tong diem bang: %.2f\n", tong);
	printf("Diem trung binh bang: %.2f", trungbinh);
	return 0;
}
