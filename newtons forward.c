#include<stdio.h>
main()
     { float x[20],y[20],y1,y2,y3,y4,d[20][20],r,X,h,p;
       int i,j,n;
       
       printf("enter the number of data points");
       scanf("%d",&n);
       
       printf("enter the x data");
       for(i=0;i<n;i++)
           { scanf("%f",&x[i]);
		   }
		   
	   printf("enter y data");
	   for(i=0;i<n;i++)
	       { scanf("%f",&y[i]);
		   }
		   
	    printf("enetr x value");
	    scanf("%f",&X);
		   
        for(j=0;j<n-1;j++)
            { for(i=0;i<n-1-j;i++)
                  { if(j==0)
				       d[i][j]=y[i+1]-y[i];
                    else
					   d[i][j]=d[i+1][j-1]+d[i][j-1];
				  }
			}
			
		 h=x[1]-x[0];
        p=(X-x[0])/h;
        
        printf("p=%f",p);
        
        y1=p*d[0][0];
        y2=p*(p-1)*d[0][1]/2;
        y3=p*(p-1)*(p-2)*d[0][2]/6;
        
        r=y[0]+y1+y2+y3;
        
        printf("result=%f",r);
        
    }
