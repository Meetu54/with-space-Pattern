#include<stdio.h>
main(){
	int r,c,k;
	
	for(r=5; r>=1; r--){
		
		for(k=5; k>r; k--)
		printf(" ");
	for(c=r; c>=1; c--){
		
	
		printf("%d",c);
	}
	printf("\n");
}
}
