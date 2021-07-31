
#include<stdio.h>

int main(){
	int  i, j; 
	for (i = 2; i <= 10; i++ ) {
	for ( j = 1; j <= 11; j++) {

    if(j == 11) {printf("\n");}
    else{
	
	
	 printf(" %2d ", i*j); } }
	
	}
	 
	return 0;
}
