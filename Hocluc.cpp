#include<stdio.h>

 main() {
	float a, b, c;
     printf("Nhap diem tb hk2, diem toan, diem van:");
     scanf("%f %f %f", &a, &b, &c);
     if(a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10) { printf("ERROR"); }
     if((a >= 8 && b >= 8 && a <= 10 && b <= 10) || (a >= 8 && c >= 8 && a <= 10 && c <= 10) ) { printf("Hoc luc gioi"); }
     else if((a >= 6.5 && b >= 6.5) || (a >= 6.5 && c >= 6.5) ) { printf("Hoc luc kha"); }
     else if((a >= 5 && b >= 5) || (a >= 5 && c >= 5)) { printf("Hoc luc TB"); }
     else if(a < 5 && a>=0 ) { printf("Hoc luc yeu"); }
     return 0;
     printf("/ERROR/");
     return 0;
     }	
			
 
	

