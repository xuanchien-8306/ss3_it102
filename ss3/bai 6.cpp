#include <stdio.h>

int main(){
	float day;
	float h;
	float s;
	printf("Nhap vao do dai canh day cua tam giac: ");
	scanf("%f", &day);
	printf("Nhap vao chieu cao cua tam giac: ");
	scanf("%f", &h);
	s = 0.5*day*h;
	printf("Dien tich cua tam giac bang: %.2f", s);
	return 0;
}
