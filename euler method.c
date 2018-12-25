#include<stdio.h>
#include<stdlib.h>
float f(float,float);

main()
     { float x[100],y[100],X,h;
       int i;
       
       printf("enter the y[0] value\n");
       scanf("%f",&y[0]);
       
       printf("enter the X value whwre y is to be found\n");
       scanf("%f",&X);
       
       printf("enter the step length\n");
       scanf("%f",&h);
       
       x[0]=0;
       
       for(i=0;x[i]<X;i++)
           { x[i+1]=x[i]+h;
             y[i+1]=y[i]+h*f(x[i],y[i]);
		   }
		   
		printf("the value of y at %f is %f\n",X,y[i]);
	 }
	 
float f(float x,float y)
        { float f;
          f=(y-x)/(y+x);
          return f;
		}
