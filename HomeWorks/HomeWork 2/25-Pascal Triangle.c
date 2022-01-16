#include<stdio.h>

int main()
{
  int n,r,s,i,c;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  
  for(r=1;r<=n;r++)
  {
    c=1;
    for(s=1;s<=50-r;s++)
    printf(" ");

    for(i=1; i<=r; i++)
    {
      printf("%d ",c);
       c = c * (r-i)/i;
    }

    printf("\n");
  }

  return 0;
}
