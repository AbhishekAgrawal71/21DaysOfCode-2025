// 2. Check for Duplicates
// A problem that introduces duplicate detection algorithms and set-based thinking.
// Problem Statement: Given an array nums of size n, return true if any value appears more than once, otherwise return false.
// This problem helps you practice set-based logic and understand how to efficiently detect repetitions using built-in data structures.
// Your task: Return true if any value appears more than once, otherwise return false.
// Examples
// Input: nums = [1, 2, 3, 4] Output: false
// Input: nums = [1, 2, 3, 2] Output: true
// Input: nums = [5, 5, 5] Output: true
#include<stdio.h>
int main(){
  int n,count,num;
  printf("Enter the number of elements of array");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(int j=0;j<n;j++){
  printf("%d ",arr[j]);
  }
  for(int k=0;k<n;k++){
  num=arr[k];
  count=0;
  for(int m=0;m<n;m++){
  if(num==arr[m]){
  count++;}
  }
  if(count>1){
  printf("\ntrue");
    break;
  }
  }
  if(count==1){
  printf("\nfalse");
  }
  return 0;
  }
  

