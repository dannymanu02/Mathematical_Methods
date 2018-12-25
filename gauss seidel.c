#include<stdio.h>
#define s 20
#define sf scanf
#define pf printf

main()
     { float a[s][s],b[s],x[s],y[s],z[s];
       int n,i,j,itr;
       
       pf("enter the coefficient matrix");
       
       for(i=0;i<3;i++)
          { for(j=0;j<3;j++)
		       { sf("%f",&a[i][j]);
				} 
		  }
		    
	   pf("enter the constant matrix");
	   
	   for(i=0;i<3;i++)
	      { sf("%f",&b[i]);
		  }
		    
	   pf("enter the initial approximations");
	   
	     {sf("%f%f%f",&x[0],&y[0],&z[0]);
	     }
	     
	   pf("enter the number of iterations");
	   sf("%d",&itr);
	   
	   for(i=0;i<itr;i++)
	      { x[i+1]=(b[0]-a[0][1]*y[i]-a[0][2]*z[i])/a[0][0];
	        y[i+1]=(b[1]-a[1][0]*x[i+1]-a[1][2]*z[i])/a[1][1];
	        z[i+1]=(b[2]-a[2][0]*x[i+1]-a[2][1]*y[i+1])/a[2][2];
		  }
		  
		pf("\n%f\n%f\n%f\n",x[i],y[i],z[i]);
	 }
