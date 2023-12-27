


#include<stdio.h>

void toplama(int a, int b){

int toplam=a+b;
printf("%d", toplam);
}	
		
void cikarma(int a, int b){
	int cikar=a-b;
	printf("%d", cikar);
	
}
void carpma(int a, int b){
	int carp=a*b;
	printf("%d", carp);
}
void bolme(int a, int b){
	int bol=a/b;
	printf("%d", bol);
}

		
int main(){
	int c=0;
	int d=0;
		
	printf("toplama icin 1 e basiniz, cikarma icin 2 e basiniz, carpma icin 3 e basiniz, bolme icin 4 e basiniz:");
	printf("\n");
	
	int toplam=1;
	int cikar=2;
	int carp=3;
	int bol=4;
		
  int secim=0;
  printf("islemi giriniz:");
  scanf("%d", &secim);
	  
	  switch(secim){
	  	case 1:
	  		
	  	printf("ilk sayiyi giriniz:");
	    scanf("%d", &c);
	    
	    printf("ikinci sayiyi giriniz:");
	    scanf("%d", &d);
	     toplama(c,d);
	
	  	
	  	break;
	  	
	  	case 2:
	  		
	  	printf("ilk sayiyi giriniz:");
	    scanf("%d", &c);
	    
	    printf("ikinci sayiyi giriniz:");
	    scanf("%d", &d);
	    cikarma(c,d);
	    
	  	
	  	break;
	  	    
	  	case 3:
	  			printf("ilk sayiyi giriniz:");
	    scanf("%d", &c);
	    
	    printf("ikinci sayiyi giriniz:");
	    scanf("%d", &d);
	    carpma(c,d);
	  
		
		break;
		  
		case 4:
				printf("ilk sayiyi giriniz:");
	    scanf("%d", &c);
	    
	    printf("ikinci sayiyi giriniz:");
	    scanf("%d", &d);
	    bolme(c,d);
		
	    break;      
	    
	    default:{
			break;
			printf("hatali islem yaptiniz:");
			
	  }
	  
	  
	  
		return 0;
	  	
	}
}
	  

