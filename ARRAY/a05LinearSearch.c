// Linear Search in Array
#include<stdio.h>
int main()
{
    int arr[20],data,i,n;
    printf("Enter a number of element in array :");
    scanf("%d",&n);
    printf("Enter %dnum \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the num to search\n");
    scanf("%d",&data);

 for(i=0;i<n;i++)
 {
    if(arr[i]==data)
    {
        printf("element foundn at index:%d",i,data);
        break;
    }
 }
 if(i==n)
 printf("%d is not found in array\n",data);

 return 0;
}

// *****OUTPUT******
// Enter a number of element in array :8
// Enter 8num 
// 7
// 5
// 9
// 3
// 4
// 2
// 1
// 6
// Enter the num to search
// 4
// element foundn at index:4
