// 1. K-Frequency Element Sum
// A problem that combines frequency counting with conditional summation of distinct elements.
// Problem Statement: Given an array of integers nums and an integer k, find the sum of all distinct elements that appear exactly k times in the array. Each such element should be included only once in the sum.
// This problem teaches you to apply frequency maps and conditional filtering, helping you extract meaningful insights based on occurrence constraints.
// Your task: Find the sum of all distinct elements that appear exactly k times in the array.
// Examples
// Input: nums = [2, 3, 9, 9], k = 1 Output: 5
// Input: nums = [1, 8, 8, 8, 5, 6, 2], k = 3 Output: 8
#include<stdio.h>
int summ(int arr[],int n,int k){
int count,num,add;
int brr[n];
for(int i=0;i<n;i++){
if(arr[i]==arr[i+1]){
i++;
}
count=0;
num=arr[i];
for(int j=0;j<n;j++){
if(num==arr[j]){
count++;
}}
if(count==k){
  add=add+num;
}}
return add;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
  int k,n;
  printf("Enter the number of elements of array");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(int j=0;j<n;j++){
  printf("%d ",arr[j]);
  }
  printf("\n");
  printf("Enter the value of k");
  scanf("%d",&k);
  bubbleSort(arr,n);
  printf("The value of the sum is %d ",summ(arr,n,k));
  return 0;
}
