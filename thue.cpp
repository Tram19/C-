#include<stdio.h>

 main() {
	float a;
     printf("Doanh so= ");
     scanf("%f", &a);
     
     if( a <= 200000000 ); { printf("Thue la %f VND", a * 0.03) ; 
      return 0;
      }  if( a <= 500000000 ); { printf("Thue la %f VND", a * 0.05) ;
      return 0;
     }   if( a >= 1000000000 ); { printf("Thue la %f VND", a * 0.1) ; 
        return 0;
	 }
     
      
     
	  
    
     return 0; 
     
     
     }
		
			
 
	

