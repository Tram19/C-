#include<stdio.h>

  main() {
	int n;
	printf("n=");
	scanf("%d", &n);
     for(int i = 2; i < n; i++){
        if(n % i == 0 ) {
		printf("%d khong la so nguyen to", n);
	} else { 
		printf("%d la so nguyen to", n);
		} 
	return 0;
	
} }
