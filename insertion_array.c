#include <stdio.h>

int main (int n, int i){
    //create an array using user input

    printf("Enter the length of the array:");
    scanf ("%d", &n);

    //checking if n is a non-zero positive number
    if (n <= 0){
        printf("Error, please enter a non-zero positive number.");
    }
    else{
        int arr[n];
    }

    //taking inputs into the array
    for (i=0; i<n; i++){
        scanf ("%d", &arr[i]);
        }
        printf("The array is:\n");
        
        for (i = 0; i < n; i++){
            printf("%d\n", arr[i]);
            }
    }

//devise the insertion sort algorithm 


