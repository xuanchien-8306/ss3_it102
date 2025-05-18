#include <stdio.h>

int main(){
	float r;
	float pi = 3.14;
	float c;
	float a;
	printf("Moi ban nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	c = 2*pi*r;
	a = pi*r*r;
	printf("Chu vi hinh tron la: %.2f\n",c);
	printf("Dien tich hinh tron la: %.2f",a);
	return 0;
}
