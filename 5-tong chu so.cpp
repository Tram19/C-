
#include<stdio.h>
int main(){
    int n;
    int phandu;
    int s = 0;
    printf("Nhap so: ");
    scanf("%d",&n);
    while(n != 0 ){
        phandu = n % 10;
        s = s + phandu ;
        n = n / 10;
    }    
    printf("Tong la : %d",s);
}
