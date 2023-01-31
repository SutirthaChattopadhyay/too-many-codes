#include <stdio.h>

#include <string.h>

#include <math.h>
#include <stdlib.h>
int main() 
{char s[1000000];
int t;
scanf("%d", &t);
while(t--){
scanf("%s",s); 
int len = strlen(s);
int i;
if(len%2 == 1){
printf("-1\n");
}
else{
int count = 0; 
for(i=0; i<len; i++){
if(s[i] == '1'){
count++;
}
}
int cn = len/2 - count;
if(count == len || count == 0){
printf("-1\n");
}
else{printf("%d\n", abs(cn));}
}
}
return 0;
}

