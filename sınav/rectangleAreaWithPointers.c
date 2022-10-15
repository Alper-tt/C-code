#include<stdio.h>
void rectangleArea(int a,int b,int *area, int *perimeter);
int main(){
    int a,b,area,perimeter;

    printf("Enter the side height of the rectangle: ");
    scanf("%d",&a);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&b);

    rectangleArea(a,b,&area,&perimeter);

    printf("Area: %d\nPerimeter: %d",area,perimeter);

    return 0;


}

void rectangleArea(int a, int b, int *area,int *perimeter){
    *area=a*b;
    *perimeter=2*(a+b);
}