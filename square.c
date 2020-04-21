/*
input:5
output:

 5 5 5 5 5 5 5 5 5
 5 4 4 4 4 4 4 4 5
 5 4 3 3 3 3 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 2 1 2 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 3 3 3 3 4 5
 5 4 4 4 4 4 4 4 5
 5 5 5 5 5 5 5 5 5


*/
#include<stdio.h>
int main()
{
 int a[30][30]={0},n,i,j,low,high,temp;
 scanf("%d",&n);
 low=0;
 temp=n;
 high=(2*n)-2;
 for(i=0;i<temp;i++)
 {
   for(j=low;j<high+1;j++)
     a[i][j]=n;
   for(j=low+1;j<high+1;j++)
     a[j][high]=n;
   for(j=high-1;j>low-1;j--)
    a[high][j]=n;
   for(j=high-1;j>low;j--)
    a[j][low]=n;
   n-=1;
   low++;
   high--;
 }
 for(i=0;i<2*temp-1;i++)
 { for(j=0;j<2*temp-1;j++)
    printf("%2d",a[i][j]);
  printf("\n");
 }
 printf("\n");
 return 0;
}
