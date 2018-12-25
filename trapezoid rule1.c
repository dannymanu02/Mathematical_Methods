#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
     { float a,n,b,p=0,h,q=0,r=0,x[20],y[20],area;
       int i,j;
        
       printf("enter the lower and upper limits\n");
       scanf("%f%f",&a,&b);
       
       printf("enter the number of sub divisions\n");
       scanf("%f",&n);
       
       h=(b-a)/n;
       
       for(i=0;i<=n;i++)
           { x[i]=a+i*h;
             y[i]=(x[i]*x[i])*exp(x[i]);
		   }
		   
		for(i=0;i<=n;i++)
		    { if(i==0||i==n)
		         { p=p+y[i];
				 }
				 
			  else if(i%2==0)
			      { q=q+y[i];
				  }
				  
			  else 
			       { r=r+y[i];
				   }
			}
			
		area=(h/3)*(p+2*q+4*r);
		
		printf("area=%f\n",area);
	 }
