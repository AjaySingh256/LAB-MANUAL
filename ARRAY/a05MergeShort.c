// Marge Two Shorted Array
#include <stdio.h>
int main()
{
    int n1,n2,n3;  
    int a[5], b[5], c[10];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       c[i] = a[i];
    for(int i = 0; i < n2; i++)     
        c[i + n1] = b[i];
        
    printf("The merged array: ");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);     
    
    printf("\nFinal array after sorting: ");
    for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }   
    for(int i = 0; i < n3 ; i++) 
        printf(" %d ",c[i]);
    return 0;   
}
// ***OUTPUT****
// Enter the size of first array: 5
// Enter the array elements: 4
// 5
// 1
// 7
// 8
// Enter the size of second array: 5
// Enter the array elements: 1
// 9
// 6
// 3
// 4
// The merged array: 4 5 1 7 8 1 9 6 3 4     
// Final array after sorting:  1  1  3  4  4 
//  5  6  7  8  9 
