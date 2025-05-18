#include <stdio.h>

int main(){
	float n;
	float f;
	printf("Nhap nhiet do c: ");
	scanf("%f", &n);
	f = n * 9/5 + 32;
	printf("Nhiet do f la: %.2f", f);
	return 0;
}
