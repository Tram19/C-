#include<stdio.h>
#include<math.h>


 int main() {
	int a;
	float  b, c, d, p;
	printf("Nhap hinh ");
	scanf("%d", &a) ;
       
	if (a == 1) { printf("Nhap ban kinh : "); 
	scanf("%f", &b) ;
	if (b <= 0) { printf("kich thuoc khong hop le"); }
	else {
	printf("Dien tich cua hinh tron la: %f", b * b * 3.14);
	 }  }
	else if (a == 2) { printf("Nhap kich thuoc : ");
	scanf("%f%f", &b, &c);
	if (b <= 0 || c <= 0 ) { printf("kich thuoc khong hop le"); }
	else {
	printf("Dien tich cua hinh chu nhat la: %f", b * c);
	 }; } 
	
	else if (a == 3) { printf("Nhap kich thuoc : ");
	scanf("%f%f%f", &b, &c, &d);
		if (b <= 0 || c <= 0 || d <= 0 ) { printf("kich thuoc khong hop le"); }
	else {
		p= (b + c + d) / 2 ;
	printf("Dien tich cua hinh tam giac la: %f", sqrt( p * (p -b) * (p - c)* (p - d) ) ); }
	} 	}



