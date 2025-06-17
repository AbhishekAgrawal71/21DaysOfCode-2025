// Missing and Repeated
// A problem that requires finding a missing number and a duplicate number in an array.

// Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, ...n} is missing and one number occurs twice in the array. The task is to find these two numbers.

// Your task: Find the missing number and the number that appears twice in the array.

// Examples
// Input:

// [3, 1, 3]
// Output:

// Missing: 2, Twice: 3
// Input:

// [4, 3, 6, 2, 1, 1]
// Output:

// Missing: 5, Twice: 1
#include<stdio.h>
  void missing_duplicate(int arr[],int n){
    int missing,duplicate;
    // for missing 
    int count;
    int k;
    for(int i=1;i<=n;i++){
        count=0;
          for( k=0;k<=n-1;k++){
              if(i==arr[k]){
                  count++;
                  break;
              }
          }
          if(count==0){
              missing=i;
              break;
          }
        }
    // for duplicate
    for(int j=0;j<=n-1;j++){
        if(arr[j]==arr[j+1]){
            duplicate=arr[j];
        }
    }
      printf("The missing number is %d\n",missing);
      printf("The duplicate number is %d\n",duplicate); 
  
  }
    int bubbleSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int main(){
      int n;
      printf("Enter the range for numbers");
      scanf("%d",&n);
      int arr[n];
      printf("Enter the numbers upto %d \n :",n);
      for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
      }
      bubbleSort(arr,n);
      for(int i=0;i<=n-1;i++)
        {
            printf("%d ",arr[i]);
            
        }
        printf("\n");
      missing_duplicate(arr,n);
        return 0;
    }


    
