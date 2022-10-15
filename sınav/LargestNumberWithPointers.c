#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,num;
    float *data;

    printf("Enter number of elements (1 to 100):");
    scanf("%d", &num);

    data = (float*)calloc(num,sizeof(float));

    if(data == NULL){
        printf("not enough memory");
    }

    for(i = 0;i<num;i++){
        printf("Enter %d. element:\t",i+1);
        scanf("%f", data+i);
    }

    for(i=1;i<num;i++){
        if(*data<*data+i){
            *data=*(data+i);
        }
    }
    printf("The largest number is : %.0f", *data);

return 0;
}