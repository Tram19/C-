#include <stdio.h>
#include <string.h>  
 
int main() {
 
    char TK[] = "laptrinhc@gmail.com";
    char MK[] = "Demo1234";
 
    char user[100], pass[100]; 
 
    printf("Nhap tai khoan: ");
    gets(user);
 
    printf("Nhap mat khau: ");
    gets(pass);
 
    if(strcmp(user, TK) != 0 ) {
        printf("Vui long dang nhap lai"); }
    else if(strcmp(user, TK) == 0 && strcmp(pass, MK) != 0) {
	  
    while(strcmp(TK, user) == 0 && strcmp(pass, MK) != 0) {
        printf("\nVui long nhap lai mat khau\n");
        printf("Nhap mat khau: ");
        gets(pass);
    } }
 
    printf("Login successful!\n");
 
    return 0;
}
