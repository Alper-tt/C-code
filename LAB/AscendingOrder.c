#include<stdio.h>

int smallest(int arr1[], int n1){
    int min=999999;
    for(int i=0 ; i<n1; i++){

        if(arr1[i]<min){
        
             min = arr1[i];
        }
    }
    for(int i=0; i<n1; i++){
        
        if(arr1[i]==min){
        
            arr1[i]=999999;
            break;
        
        }
    }      
    
    return min;
}

void printArr(int arr2[], int n2)
{
    for (int i = 0; i < n2; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
}

int smallest(int arr1[],int n1);

void printArr(int ary2[], int n2);


int main(){
    int add,t,a,j,b;

    printf("Enter the number of terms: ");
    scanf("%d", &t);
    int input[t],ord[t+1];

    for (int i=0; i<t; i++){
        printf("Array[%d] = ",i);
        scanf("%d",&input[i]);
    }
    
    for(int i=0 ; i<t; i++){
        ord[i] = smallest(input, t);
    }

    printArr(ord,t);
    printf("Number to add = ");
    scanf("%d",&add);

    for (int i=0;i<=t;i++){

        if(add<ord[i]){
         
            a = ord[i];
         
            for(j = i; j<=t ;j++){
         
                b = ord[j+1];
                ord[j+1] = a;
                a = b;
         
            }
           ord[i]=add;
            break;
        
        }
        else if(i==t){
        
            ord[i] = add;

        }
    }
    printArr(ord,t+1);

    return 0;
}