#include<stdio.h>
int binary(int n,int i)
{ int n,i;
   int ar[n]={};
    	
}
 int main()
 {
	int s,n,i,j;
	 printf("Choose 1-->Binary Sort 2-->Insertion Sort ");
	  scanf("%d ",&s);
	    switch(s)
		{
			 case 1:
			   printf("Enter Your Range->");
			    scanf("%d ",&n);	
			 	 binary(n);
			 case 2:
			   printf("Enter Your Range->");
			    scanf("%d",&n);
				 inster(n);	
		} 
 }  
