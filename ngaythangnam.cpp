#include <stdio.h>

int a, b, c;
char *a_char;

int main(){
    printf("Nhap ngay thang nam: ");
    scanf("%d %d %d", &a, &b, &c);
    switch(a) {
    	case 1 :
    		a_char = "january";
    		break;
    	case 2 :
		  	a_char = "february";
		  	break;
		case '3' :
		  	a_char = "march";
		  	break; 	
 	    case 4 :
		  	a_char = "april";
		
		  	break;    
        case 5:
            a_char = "May";
            break;
        case 6:
            a_char = "June";
            break;
        case 7:
            a_char = "July";
            break;
        case 8:
            a_char = "August";
            break;
        case 9:
            a_char = "September";
            break;
        case 10:
            a_char = "October";
            break;
        case 11:
            a_char = "November";
            break;
        case 12:
            a_char = "Demcember";
            break;
    }
printf("%s %d", a_char, b);
if ( b == 1 || b == 11 || b == 21 || b == 31) { printf("st, "); }

else if ( b == 2 || b == 12 || b == 22) { printf("nd, "); } 

else if ( b == 3 || b == 13 || b == 23) { printf("rd, ") ; }

 else {printf("th, ");
 
 }
  printf("%d", c);
}
    
    

