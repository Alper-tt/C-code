#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[10],no=10;


    for(int i=0;i<no;i++){
        arr[i] = no%2;
        no/=2;
    } 


    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }




    return 0;
}