// 2. Find First and Last Element
// A problem that teaches array indexing and accessing elements at specific positions.
// Problem Statement: Given an array nums of size n, return the first element and the last element of the array as a pair.
// This problem teaches you about array indexing and how to access elements at specific positions, which is fundamental for understanding array boundaries and element positioning.
// Your task: Return the first and last elements of the array.
// Examples
// Input: nums = [1, 2, 3, 4] Output: First: 1, Last: 4
// Input: nums = [7] Output: First: 7, Last: 7
// Input: nums = [5, 9, 2] Output: First: 5, Last: 2
#include<stdio.h>
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
  printf("The first element of the array is %d\n",arr[0]);
  printf("The last element of the array is %d\n",arr[n-1]);
return 0;
}
