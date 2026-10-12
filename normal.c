#include<stdio.h>
#include<math.h>

/*average function to calculate the average of the elements */

int avg(int a[], int n)
{
   int i,avg=0;
    for(i=0;i<n;i++)
    {
         avg+=a[i];
    }
    avg/=n;
    printf("\nAverage of the elements is: %d",avg);
    
}

/*standard deviation function to calculate the standard deviation of the average */ 

float sd(int avg,int n,int a[])
{
      float sd=0,sum=0;
      int i;
      for (i=0;i<n;i++)
      {
          sum = sum + pow((a[i]-avg),2);
      }
      sd = sqrt(sum/n);
      
      printf("\nans:%f",sd);
      return sd;
}    

float normalization(int avg,int a[],int sd)
{
      float z;
      for(int i=0;i<6;i++)
      {
          z = (a[i] - avg) / sd;
          printf("%f ",z);
      }
      return printf("\nNormalized value is: %f",z);
}

/* main function */

int main()
{
   int a[25]={23,45,28,65,87,4};
   int i;
    printf("your elements:");
   for (i=0;i<6;i++)
   {
           printf("%d ",a[i]);
   }
   avg(a,6);
   int result = avg(a,6);
   int standard_deviation = sd(result,6,a);
   normalization(result,a,standard_deviation);
}