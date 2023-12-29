#include<stdio.h>

main(){
	
	
	 int a,b,*i;
	 int *p;
	 
	 printf("Enter A :-");
	 scanf("%d",&a);
	 printf("Enter B :-");
	 scanf("%d",&b);
	 
	 p=&a;
	 i=&b;
	 
	   *p = *p+*i;
       *i = *p-*i;
       *p = *p-*i;
       printf("A = %d\n",*p);
       printf("B = %d\n",*i);
	
}
