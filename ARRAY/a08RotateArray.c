//Rotate Array
#include<stdio.h>
void reverse(int arr[] ,int si ,int ei){//reversing part  of arry
    for(int i=si, j=ei;i<j;i++,j--){
        //arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{

int arr[7]  = {1,2,3,4,5,6,7};
int n=7;
int k =5;
//steps
k =k%n;
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);


for(int i=0;i<=6;i++){
    printf("%d ",arr[i]);
}
return 0;
}
// ***OUTPUT***
// 3 2 5 4 7 1 6 
