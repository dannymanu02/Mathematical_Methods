#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
     { float a[100],x[100],f[100];
       int n,i,itr;
      
       printf("enter the degree of the equation");
       scanf("%d",&n);
       
       printf("enter the coefficients");
       for(i=0;i<=n;i++)
          { scanf("%f",&a[i]);
		  }
		  
	   printf("enter the upper and lower limits");
	   scanf("%f%f",&x[1],&x[2]);
		  
	   x[0]=(x[1]+x[2])/2;
	   f[0]=pow(x[1],3)-(4*x[1])-9;
	   f[1]=pow(x[2],3)-(4*x[2])-9;
	   
	   printf("enter the number of iterations");
	   scanf("%d",&itr);
	   
	   for(i=0;i<itr;i++)
	      { if(i==1||i==2)
			   { break;
			   }
		    
			f[i+2]=pow(x[i],3)-(4*x[i])-9;
	      
	        if((f[i+2]>0&&f[i]<0)||(f[i+2]<0&&f[i]>0))
	           { x[i+3]=(x[i]+x[i+1])/2;
			   }
			   
			if((f[i+2]>0&&f[i+1]<0)||(f[i+2]<0&&f[i+1]>0))
			  { x[i+3]=(x[i]+x[i+2])/2;
			  }
			  
			if(f[i+2]==0)
               { printf("the root is %f",&x[i]);
	             exit(0);		   
			   } 
			   
			   		      
		  } 
	   
		printf("the root=%f",x[i]);  
		for(i=0;i<itr;i++)
          { printf("%f",f[i]);
		  }
	   
	 }
