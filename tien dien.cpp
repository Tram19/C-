#include<stdio.h>

 main() {
	float a;
     printf("So dien(kWh) = ");
     scanf("%f", &a);
         if( a < 0 ) { printf("so tien dien khong hop le") ; }
          else if ( a >= 0 && a <= 50 ) { printf("\nTien dien = %f VND", a * 1000) ;}
         else if( a >= 51 && a <=100 ) { printf("\nTien dien = %f VND", 50 * 1000 + (a-50) * 1300) ; 
      
      }  else if( a <= 200 && a >= 101 ) { printf("\nTien dien = %f VND", 50 * 1000+ 50 * 1300 + (a - 100) * 1500) ;
      
     }   else if( a <=300 && a >= 201 )  { printf("\nTien dien = %f VND", 50 * 1000 + 50 * 1300 + 100 * 1500 + (a - 200) * 1800) ; 
     
	 }   else if( a <=400 && a >= 301 )  { printf("\nTien dien = %f VND", 50 * 1000 + 50 * 1300 + 100 * 1500 + 100* 1800 + (a - 300) * 2000);
	  }   else if( a > 400 )  { printf("\nTien dien = %f VND",  50 * 1000 + 50 * 1300 + 100 * 1500 + 100 * 1800 + 100 * 2000 + (a - 400) * 2500);
	 }
        return 0;
        } 
      
     
	  
    
     
     
     
     
		
			
 
	

