#include<stdio.h>
  int main()
  {
  	 int a;
  	 float d,c=1100.00,b,l;
  	    printf("Enter Your Name-->");
  	 // printf("Enter Your A/C Number-->");
  	  scanf("%d",&ac);
  	  printf("Current Balance--> 1100\n");
        	  
  	   printf("1=>Deposit 2=>Withdraw 3=>Balance 4=>EXIT\n"); 
  	      
  	       while(a!=4)
  	       {
			 printf("\nEnter Your Choice-->\n "); 
			    scanf("%d",&a);
		     switch(a) 
		     {
		     	case(1):
		     		printf("Deposit \nEnter The Amount -->");
		     		  scanf("%f",&b);
		     		    d=b+c;
		     		     //printf("Current Balance--> %f",d);
						  break;
				case(2):
		     		printf("Withdraw \nEnter The Amount -->");
		     		  scanf("%f",&l);
		     		    d=l-c;
		     		     //printf("Current Balance--> %f",d);
						  break;		  	     		    
		     	case(3):
		     	/*	printf("Current Balance-->");
		     		  scanf("%f",&b);
		     		    d=b+c;*/
		     		     printf("Current Balance--> %f",d);
						  break;	    
		     		
		     		 
			 }
		}
  	       			    
  }
