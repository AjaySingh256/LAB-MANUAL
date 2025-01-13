// ADD TWO ARRAY
#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sumArr[5],i;
    
    printf("Enter the num:");
    for(i=0;i<5;i++)
    scanf("%d",&arr1[i]);

 printf("Enter the num:");
    for(i=0;i<5;i++)
    scanf("%d",&arr2[i]);
  
for(i=0;i<5;i++)
{
    sumArr[i]=arr1[i]+arr2[i];
  printf(" sum array element at index %dis= %d\n",i,sumArr[i]);  
}
}
// OUTPUT
// Enter the num:4
// 4
// 5
// 6
// 1
// Enter the num:7
// 8
// 9
// 4
// 5
//  sum array element at index 0is= 11     
//  sum array element at index 1is= 12     
//  sum array element at index 2is= 14     
//  sum array element at index 3is= 10     
//  sum array element at index 4is= 6 
