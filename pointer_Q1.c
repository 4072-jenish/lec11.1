#include<stdio.h>

main(){
	
	
	 int a[100],n,i;
	 int *p;
	 
	 printf("Enter size of Array :-");
	 scanf("%d",&n);
	 
	 p=&a;
	 
	 
	 for (i=0;i<n;i++){
	 	  printf("Enter elements :-");
	 	  scanf("%d",&a[i]);
	 } 
	for (i=0;i<n;i++){
	 	  printf("%d\n",(*(p+i))*(*(p+i)));
	 	  
		 } 
	
	
	
}
