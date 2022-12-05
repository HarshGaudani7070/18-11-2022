#include<stdio.h>

main(){
	
	int a,b,c,d,e;
	
	printf("Enter A :- ");
	scanf("%i",&a);

	printf("Enter B :- ");
	scanf("%i",&b);

	printf("Enter C :- ");
	scanf("%i",&c);

	printf("Enter D :- ");
	scanf("%i",&d);
	
	printf("Enter E :- ");
	scanf("%i",&e);	
	
	if(a>b){
		
		if(a>c){
			
				if(a>d){
					
					if(a>e){
						printf("A is Max");
					}
							
				else{
					printf("E is Max");
				}
			}
			else{
				printf("D is Max");
			}
		}
		
		else{
			
			printf("C is max");
		}
}
		
	else if(b>c){
		
			if(b>d) {
					
					if(b>e){
						printf(" B is max");		
					}
				
					else{
						printf("E is Max");
					}
	}
			else{ 
		
				printf("D is max");
		
		}
	}	
	else if(c>d){
		
			if(c>e){
		
				printf("C is Max");		
		
			}
			
			else{
				
				printf("E is Max");
			}
		
		
	}
	
	else if(d>e){
		
		printf("D is max");
	}
	
	else{
		
		printf("E is Max");
	}

}



