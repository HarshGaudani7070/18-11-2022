#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A :- ");
	scanf("%i",&a);

	printf("Enter B :- ");
	scanf("%i",&b);


	printf("Enter C :- ");
	scanf("%i",&c);
	
	a>b ?     
		
		a>c ?
			printf("A is Max")
		:
			printf("C is Max")
	:	 
		 b>c ?
			
			printf("B is Max")
		:
			printf("C is Max");
		}
