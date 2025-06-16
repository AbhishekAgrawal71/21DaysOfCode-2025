#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of elements ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
        if(arr[i]<0){
        arr[i]=0;
      }
    }
  for(int j=0;j<n;j++)
    {
    printf("%d ",arr[j]);
    }
  return 0;
}
