void hesaplama(){
		int a,b;
		int top=1;
		int cik=2;
		int carp=3;
		int bol=4;
		
	printf("ilk sayiyi giriniz:");
	scanf("%d", a);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d", b);
	
	  char secim;
	  printf("islemi giriniz:");
	  scanf("%c", &secim);
	  
	  switch(secim){
	  	case 1:
	  	printf("%d", top);
	  	break;
	  	
	  	case 2:
	  		printf("%d", cik);
	  	    break;
	  	    
	  	case 3:
		  printf("%d", carp);
		  break;
		  
		case 4:
		printf("%d", bol);
	    break;      
	    
	    default:
	    	printf("hatali islem yaptiniz:");
	  }
	  
	  
	  
		
	}
	int main(){
	  	hesaplama(78,56);
	  	return 0;
	  }
