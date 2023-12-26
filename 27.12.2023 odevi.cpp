

#include<stdio.h>

void hesaplama(int a, int b){

	int toplama=a+b;
	int cikarma=a-b;
	int carpma=a*b;
	int bolme=a/b;
	
		
	printf("ilk sayiyi giriniz:");
	scanf("%f", &a);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%f", &b);
		}
	int main(){
		
		int a=0;
		printf("ilk sayiyi giriniz:");
	    scanf("%f", &a);
	    
	    int b=0;
	    printf("ikinci sayiyi giriniz:");
	    scanf("%f", &b);
	
		
		int top = a+b;
		int cik = a-b;
		int carp = a*b;
		int bol = a/b;
		int toplama= 1;
		int cikarma= 2;
		int carpma=3;
		int bolme=4;
		printf("toplama icin 1 e basiniz, cikarma icin 2 e basiniz, carpma icin 3 e basiniz, bolme icin 4 e basiniz:");
		
	  char secim;
	  printf("islemi giriniz:");
	  scanf("%c", &secim);
	  
	  switch(secim){
	  	case 1:
	  	int toplama=(int a + int b);
	  	printf("%f", toplama);
	  	break;
	  	
	  	case 2:
	  	int cikarma=(int a - int b);
	  	printf("%f", cikarma);
	  	break;
	  	    
	  	case 3:
	  	int carpma=(int a * int b);
		printf("%f", carpma);
		break;
		  
		case 4:
		int bolme=(int a/ int b);
		printf("%f", bolme);
	    break;      
	    
	    default:{
			break;
			printf("hatali islem yaptiniz:");
			
	  }
	  
	  
	  
		return 0;
	  	
	}
}
	  

	  
	  
		return 0;
	  	
	}
}
	  
