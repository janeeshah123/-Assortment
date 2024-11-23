#include<stdio.h>
 int main() {
 	 int rows,column,i,j;
 	    
 	     printf("Enter the array's row size:");
 	      scanf("%d",&rows);
 	      
 	      printf("Enter the array's column size:");
 	       scanf("%d",&column);
 	       
 	     int a[rows][column];

 	      printf("Enter the array's elements:\n");
 	      for(i=0;i<rows;i++) {
 	      	for(j-0;j<column;j++) {
 	      		 printf("a[%d][%d]=",i,j);
 	      		  scanf("%d",&a[i][j]);
			   }
		   }
		   
		   int largest=a[0][0];

						
		   	  	  printf("The largest element is: %d\n", largest);
		   }
		   
	
              