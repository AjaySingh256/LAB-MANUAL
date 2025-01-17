// Reverse array
#include<stdio.h>
int main()
{

int arr[7]  = {1,2,3,4,5,6,7};
//reverse (arr)
// index 1-4 reverse
for(int i=1,j=4;i<=j;i++,j--){
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
for(int i=0;i<=6;i++){
    printf("%d ", arr[i]);
}
return 0;
}

// ***OUTPUT***

// 1 5 4 3 2 6 7 
