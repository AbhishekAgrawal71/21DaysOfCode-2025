// 1. Sum of All Even Numbers
// A problem that combines conditional logic with accumulation to filter and sum specific elements.
// Problem Statement: Given an array of integers nums of size n, calculate and return the sum of all even numbers in the array.
// This problem combines conditional logic with accumulation, teaching you to filter elements based on specific criteria while performing mathematical operations on the filtered data.
// Your task: Calculate and return the sum of all even numbers in the array.
// Examples
// Input: nums = [1, 2, 3, 4, 5] Output: 6
// Input: nums = [10, 15, 20] Output: 30
// Input: nums = [1, 3, 5] Output: 0
#include<stdio.h>
int sum_of_even_numbers(int arr[],int n)
{
        int sum=0;
        for (int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
        sum=sum+arr[i];}
        }
        return sum;}
    int main(){
      int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
    printf("%d ",arr[j]);
    }
  printf("\n");
  printf("The sum of the even numbers in the array is %d",sum_of_even_numbers(arr,n));
return 0;
}
