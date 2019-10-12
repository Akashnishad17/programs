#include <stdio.h>
 int main()
{
int i,k;
printf("Akash Nishad\n R172217005\n");
printf("Enter two integers \n");
scanf("%d %d",&i,&k);
printf("\n Before swapping i=%d and k=%d",i,k);
i = i ^ k;
k = i ^ k;
i = i ^ k;
printf("\n After swapping i=%d and k=%d",i,k);
return 0;
}
