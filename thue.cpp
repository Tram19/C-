#include<stdio.h>

 main() {
	float a;
     printf("Doanh so= ");
     scanf("%f", &a);

     if( a <= 200000000 ) { printf("\nThue la %f VND", a * 0.03) ; 
      
      }  else if( a <= 500000000 ) { printf("\nThue la %f VND", a * 0.05) ;
      
     }   else if( a >= 1000000000 )  { printf("\nThue la %f VND", a * 0.1) ; 
    
	 }
        return 0;
        }
		
			
 
	

