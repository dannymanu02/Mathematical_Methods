#include<stdio.h>
#include<stdlib.h>

main()
     { float nu,de,x,y;
       int n,i;
     
       printf("enter the total terms");
       scanf("%d",&n);
       
       printf("enter the x value");
       scanf("%f",&x);
       
       nu=1;
       de=1;
       y=0;
       
       for(i=0;i<n;i++)
          { y=y+(nu/de);
            nu=nu*x;
            de=de*(i+1);
		  }
		  
		printf("the exponential at %f is %f",x,y);
	 }
