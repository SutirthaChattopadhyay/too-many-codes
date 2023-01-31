#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,s=0;
      scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
           s=s+a[i];         
        }
		float b=n*50;  float p=s/(b)*100;
      printf("Total Marks ->%d",s);
      printf("\nPercentage ->%f",p);
    return 0;
}
