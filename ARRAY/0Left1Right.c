// 0 Left 1 Right
#include <stdio.h>

int main() 
{
    int a[10] , i, j,s;
     printf("enter num : ");
    for(int i=0; i<10; i++)
    {
        //printf("enter num : ");
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            
                {
              s=a[j];
        a[j]=a[j+1];
        a[j+1]=s;
        
    }
      }
     }
    for(i=0; i<10;i++)
   printf("%d ",a[i]);
    return 0;
      }
//   ***OUTPUT***
//   enter num : 0
// 1
// 0
// 1
// 0
// 1
// 0
// 0
// 1
// 0

// 0 0 0 0 0 0 1 1 1 1 
