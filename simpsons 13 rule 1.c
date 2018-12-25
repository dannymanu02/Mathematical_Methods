#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
     { float x[20],y[20],a,b,h,area,c,d,o;
       int i,n;
       printf("enetr the number of sub divisions");
       scanf("%d",&n);
       if(n%2!=0)
         { printf("simpsons rule not applicable");
           exit(0);
		 }
       printf("enter the lower and upper limits");
       scanf("%f%f",&a,&b);
       h=(b-a)/n;
       printf("h=%f",h);
       for(i=0;i<=n;i++)
          { x[i]=(i*h); 
		  }
	   for(i=0;i<=n;i++)
	       { y[i]=pow(x[i],2)*exp(x[i]);
		   }
	   for(i=0;i<=n;i++)
	       { printf("\nx[%d]=%f\n",i,x[i]);
	         printf("\ny[%d]=%f\n",i,y[i]);
		   }
	   c=y[0]+y[n];	
	   d=0;
	   o=0;   
	   for(i=1;i<n;i++)
	       { 
	         if(n%2==0)
	                {d=d+y[i];
	                }
	         else 
	             {o=o+y[i];
	             }
		   }
		 printf("c=%fd=%fo=%f",c,d,o); 
		area=(h/3)*(c+2*d+4*o);
		printf("\narea=%f",area);
	}
