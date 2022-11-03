
#include <stdio.h>

int findSum(int arr[], int len);

int main(){
    int arr[] = {1,2,3,4,5,8,7};
    printf("%d\n",findSum(arr, sizeof(arr)/sizeof(arr[0])-1));

    return 0;
}

int findSum(int arr[], int len){
    if (len == 0)
    {
        return arr[0];
    }else{
        return arr[len]+findSum(arr,len-1);
        }
}