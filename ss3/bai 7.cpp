#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Nhap so tu nhien co 4 chu so: ");
	scanf("%d", &n); 
	for(int i = 0 ;i <= 4 ;i++ ){
		sum = sum + i;
	}
	printf("Tong cac chu so bang: %d\n", sum);
	return 0;
}
