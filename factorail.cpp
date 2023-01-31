#include <stdio.h>
  int main()
    {
       int j,i,f,u=1;
    	printf("Enter no. of Rows-->");
    	scanf("%d",&f);
    	 for(j=1;j<=f;j++)
    	 {
		   for(i=1;i<j;i++)
    	    {
    	    	printf("%d",u);  /*printf("%d",i);
    	    	u++;              not needed---->1
				                                 12
    	    									 234
											     5678	*/
    	    	
			}
			printf("\n");
	     }
	}
