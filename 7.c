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
	
	a<b ?
		
		a<c ?
			
				a<d ?
					
					 a<e ?
						printf("A is Min")
					
							
				:
					printf("E is Min")
				
			
			:
				printf("D is Min")
			
		
		
		:
			
			printf("C is Min")
		

	:	
	b<c ?
		
			b<d ?
					
					b<e ?
						printf(" B is Min")		
					
				
					:
						printf("E is Min")
					
			: 
		
				printf("D is Min")
		
		
		:
		c<d ?
		
			c<e ?
		
				printf("C is Min")	
		
			
			
			:
				
				printf("E is Min")
			
	:
	d<e ?
		
		printf("D is Min")
	
	
	 :
		
		printf("E is Min");
	
}



