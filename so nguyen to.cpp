#include<stdio.h>

 int main() {
	int n;
	printf("n=");
	scanf("%d", &n);
        if(n < 2){
        printf("\n%d khong phai so nguyen to", n); }
        if(n == 2){ printf("\n2 la so nguyen to")  ; }
     for(int i = 2; i < n; i++){
        if(n % i == 0)  {
		printf("%d khong la so nguyen to", n);
	} else { 
		printf("%d la so nguyen to", n);
		} 	
	return 0;
	
} }
