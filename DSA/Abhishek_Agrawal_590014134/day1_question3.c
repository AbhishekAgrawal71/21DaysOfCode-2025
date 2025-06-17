// Sum of Array Elements
// A fundamental array operation that calculates the total sum of all elements.

// Given an array of integers, write a program that calculates and returns the sum of all elements in the array.

// This is one of the most fundamental array operations where you need to traverse through each element and accumulate their values. This type of operation is commonly used in mathematical calculations and data analysis.

// Your task: Calculate and return the sum of all elements in the array.

// Examples
// Input:

// [1, 2, 3, 4, 5]
// Output:

// 15
// Input:

// [10, 20, 30]
// Output:

// 60
// Input:

// [7, 3, 9, 1, 6]
// Output:

// 26
#include<stdio.h>
int sum_of_elements(int arr[],int n){
  int sum=0;
  for(int i=0;i<=n-1;i++){
    sum=sum+arr[i];
}
return sum;
}
int main(){
  int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
  for(int j=0;j<=n-1;j++){
    printf("%d ",arr[j]);
  }
  printf("\n");
  printf("The sum of the elements of the array is: %d ",sum_of_elements(arr,n));
return 0;
}
  
