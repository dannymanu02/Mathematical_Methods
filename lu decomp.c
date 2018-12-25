#include<stdio.h>
#include<math.h>
#define s 20
main()
     { float a[s][s],b[s],x[s],l[s][s],u[s][s],y[s];
       int j,i,n; 
       
       printf("enter the number of equations");
       scanf("%d",&n);
       
       printf("enter the coefficient matrix");
       for(i=0;i<n;i++)
          { for(j=0;j<n;j++)
               { scanf("%f",&a[i][j]);
			   }
		  }
		  
		printf("enter the constant matrix");
		for(i=0;i<n;i++)
		    { scanf("%f",&b[i]);
			}
			
		for(i=0;i<n;i++)
		   {for(j=0;j<n;j++)
		        { if(i<j)
		            { l[i][j]=0;
					}
					
				  if(i>j)
				    { u[i][j]=0;
					}
					
				  if(i==j)
				    { u[i][j]=1;
					}
				}
		   }
				
		l[0][0]=a[0][0];
		l[1][0]=a[1][0];
		l[2][0]=a[2][0];
		u[0][1]=a[0][1]/l[0][0];
		u[0][2]=a[0][2]/l[0][0];
		l[1][1]=a[1][1]-l[1][0]*u[0][1];
		u[1][2]=(a[1][2]-l[1][0]*u[0][2])/l[1][1];
		l[2][1]=a[2][1]-l[2][0]*u[0][1];
		l[2][2]=a[2][2]-l[2][0]*u[0][2]-l[2][1]*u[1][2];
		
	for(i=0;i<n;i++)
          { for(j=0;j<n;j++)
               { printf("%f\n",l[i][j]);
			   }
		  }
		  
	for(i=0;i<n;i++)
          { for(j=0;j<n;j++)
               { printf("%f\n",u[i][j]);
			   }
		  }
		  
		
	y[0]=b[0]/l[0][0];
	y[1]=(b[1]-l[1][0]*y[0])/l[1][1];
	y[2]=(b[2]-l[2][0]*y[0]-l[2][1]*y[1])/l[2][2];
	
		printf("enter the constant matrix");
		for(i=0;i<n;i++)
		    { printf("\n%f\n",y[i]);
			}
	
    x[2]=y[2];
	x[1]=y[1]-u[1][2]*x[2];
	x[0]=y[0]-u[0][1]*x[1]-u[0][2]*x[2];
	
		printf("enter the constant matrix");
		for(i=0;i<n;i++)
		    { printf("\nx[%d]=%f\n",i,x[i]);
			}
			   
		   
	 }
