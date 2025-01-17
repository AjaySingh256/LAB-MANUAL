// Binary Search****
#include<stdio.h>
int main()
{
    int arr[10],l,r,mid,data,f=0;
    for(int i=0;i<10;i++)
    {
    printf("Enter the element shorted order :");
    scanf("%d",&arr[i]);
    }
    printf("Enter the data :");
    scanf("%d",&data);
    l=0;r=9;
    while(l<r&&f==0)
    {
        mid=(l+r)/2;
        if(data==arr[mid])
        {
            printf("\n found at %d",mid+1);
            f=1;
            break;
        }
        if(arr[mid]>data)
        r=mid-1;
        else l=mid+1;
    }
    if(f==0)
    printf("\n NOT FOUND.....");
return 0;

}
// ****OUTPUT****
// Enter the element shorted order :2
// Enter the element shorted order :3
// Enter the element shorted order :4
// Enter the element shorted order :5
// Enter the element shorted order :6
// Enter the element shorted order :7
// Enter the element shorted order :8
// Enter the element shorted order :9
// Enter the element shorted order :10
// Enter the element shorted order :11
// Enter the data :7

//  found at 6
