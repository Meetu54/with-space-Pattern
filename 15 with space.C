/*ABCDE
   ABCD
    ABC
     AB
      A*/
      
 #include<stdio.h> 
main()
{
	int i,j,k;
	for(i=69;i>=65;i--)
	{
		for(k=69;k>i;k--)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
 }    	
