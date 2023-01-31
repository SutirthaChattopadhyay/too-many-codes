#include<iostream>
 using namespace std;
  int main()
   {
   	int i,n,k,j;
   	cout<<"Enter Range->";
   	 cin>>n;
   	int a[n]; 
   	for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   
   for(i = 0; i<n; i++) {
      k = a[i];
      j = i;
      while(j > 0 && a[j-1]>k) {
         a[j] = a[j-1];
         j--;
      }
      a[j] = k;  
   }	  
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";	
	     	
   }
