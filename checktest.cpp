#include<stdio.h>
int fun(int a,int b)
{if(a==0)
  return 0;
 else if(a%2)
  return fun(a/2,2*b)+b;
 else
   return fun(a/2,2*b)-b; 
}
int main()
 { printf("%x",fun(15,1));
  return 0;
 }
