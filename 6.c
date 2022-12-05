#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter A :- ");
	scanf("%i",&a);

	printf("Enter B :- ");
	scanf("%i",&b);

	printf("Enter C :- ");
	scanf("%i",&c);

	printf("Enter D :- ");
	scanf("%i",&d);
	
	a>b ?
		
		a>c ?
			
				a>d ?
					printf("A is Max")
							
				:
					printf("D is Max")
				
		
		:
			
			printf("C is max")
		

		
	: b>c ?
		
			b>d ?
		
			printf(" B is max")
	
			:	 
		
			printf("D is max")
		
	:	
		
		c>d ?
		
		printf("C is Max")
	
	
	:
		printf("D is max");
	
}


