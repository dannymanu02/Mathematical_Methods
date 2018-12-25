#include<stdio.h>
main()
    { float x[20],y[20],X,h,d[20][20],r,y1,y2,y3,y4,p;
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
		   
	    printf("enetr X value");
	    scanf("%f",&X);
	    
	    for(j=0;j<n-1;j++)
		    { for(i=0;i<n;i++)
		          { if(j==0)
		              { d[i][j]=y[i]-y[i-1];
					  }
					  
					else
					    { d[i][j]=d[i][j-1]-d[i-1][j-1];
						}
				  }
			}
			
		
        h=x[1]-x[0];
        p=(X-x[n-1])/h;
        
        printf("p=%f",p);
        
        y1=p*d[n-1][0];
        y2=p*(p+1)*d[n-1][1]/2;
        y3=p*(p+1)*(p+2)*d[n-1][2]/6;
        y4=p*(p+1)*(p+2)*(p+3)*d[n-1][3]/24;
        
        r=y[n-1]+y1+y2+y3+y4;
        
        printf("result=%f",r);
        
    }
