// 3. Check if Two Arrays are Equal
// A problem that introduces frequency counting and comparison techniques for data structure equality.
// Problem Statement: Given two arrays, determine if both contain the same elements with the same frequency, regardless of their order. Return true if they are equal, else return false.
// This problem introduces you to frequency counting and comparison techniques, which are essential for understanding how to compare data structures and verify equality beyond simple element-by-element comparison.
// Your task: Determine if two arrays contain the same elements with the same frequencies.
// Examples
// Input: nums1 = [1, 2, 3, 4], nums2 = [4, 3, 2, 1] Output: true
// Input: nums1 = [1, 2, 2, 3], nums2 = [1, 2, 3, 3] Output: false
// Input: nums1 = [1, 2, 3], nums2 = [1, 2, 3, 4] Output: false
#include<stdio.h>
#include<stdbool.h>
bool checking(int arr[], int brr[], int m, int n) {
    if (m != n) {
        return false;
    }
    for (int i = 0; i < m; i++) {
        int num = arr[i];
        int count1 = 0, count2 = 0;
        for (int j = 0; j < m; j++) {
            if (arr[j] == num) count1++;
        }
        for (int k = 0; k < m; k++) {
            if (brr[k] == num) count2++;
        }
        if (count1 != count2) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m, i;
    printf("Enter the size of array1 and array2:\n");
    scanf("%d %d", &n, &m);
    int arr[n], brr[m];
    printf("Enter the elements for array 1:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the elements for array 2:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &brr[i]);
    }
    printf("Array 1: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\nArray 2: ");
    for (int j = 0; j < m; j++) {
        printf("%d ", brr[j]);
    }
    printf("\n");
    // Print result as "true" or "false"
    if (checking(arr, brr, n, m)) {
        printf("array1 and array2 are equal: true\n");
    } else {
        printf("array1 and array2 are equal: false\n");
    }
    return 0;
}

  
