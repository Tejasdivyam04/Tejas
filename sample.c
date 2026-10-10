// Write a C program to read N elements into an array and display them, along with their sum and average.

#include <stdio.h>

int main(){
    int n , i , sum ;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter the array values : ");
    scanf("%d",&arr);

    for (i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
         sum += arr[i];
         
    }

}