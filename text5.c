#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n,s,a=1,b=0;
 printf("Enter a number\n");
 scanf("%d",&n);
 s=pow(2,n);
 for(i=1;i<=s;i++)
 {
  for(j=1;j<=n;j++)
  {
    if(i<=s/2)
        printf("%d",b);
    else
        printf("%d",a);
  }
  printf("\n");

 }
 return 0;
}
