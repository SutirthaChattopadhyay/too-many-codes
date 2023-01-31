#include <stdio.h>
#include<conio.h>
  int  main(void) 
 {
     int i,n;
    printf("Enter the range-->");
	scanf("&d",n);    
  for (i=0; i<=n; i++)
  {
       if(i%3==0 && i%5==0)
	    {
		  printf(" FizzBuzz ");
	       continue;
	    }
	   if(i%5==0)
	    {
	      printf(" Buzz ");
	       continue;
	    }
	   else if(i%3==0) 
	    {
	       printf(" Fizz ");
		    continue;
		}
	   else
	    printf("%d", i);    
	       
  }
  //return 0;
}
