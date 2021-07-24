#include<stdio.h>

int main() {
float a, b;
printf("\nNhap so 1 de chon don vi tien te VN ");
printf("\nNhap so 2 de chon don vi tien te My ");
printf("\nNhap don vi tien te ");
scanf("%f", &a);
printf("\nNhap so tien : ", &b);
scanf("%f", &b) ;
if ( a == 1) { printf ("\n%0.2f USD ", b / 23000) ;
                  printf ("\n%0.2f Yen ", b / 208.1) ;
				   printf ("\n%0.2f Pound ", b / 31506.85);
				    printf ("\n%0.2f Won ", b / 19.97) ;   }
else if ( a == 2 ) {  printf ("\n%0.2f Yen ", b * 110.52 ) ;
                     	printf ("\n%0.2f Pound ", b * 0.73 ) ;	
					printf ("\n%0.2f Won ", b * 1151.73 ) ;
					printf ("\n%0.2f VND ", b * 23000 ) ;
					}	    
				    
else if ( a != 1 && a != 2) { printf("Don vi tien te nay chua duoc cap nhat !"); }
	

}
