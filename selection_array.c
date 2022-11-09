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
    printf("Enter the elements:");
    for (i=0; i<n; i++){
        scanf ("%d", &arr[i]);
        }
    printf("The unsorted array is:\n");
        
    for (i = 0; i < n; i++){
        printf("%d,", arr[i]);
        }
    selection(arr[n], n);
    
    printf("The sorted array is:\n");
        
    for (i = 0; i < n; i++){
        printf("%d,", arr[i]);
        }
    }


//devise the selection sort algorithm 
int selection(int A[n], int n){
    int i, temp;
    for (i; i < n-1; i++){
        //check for the minimum element
        //if smallest element, swap with the first position
    }
}

int swap(int first, int end, int A[n], int n){
    //swapping elements to place at the beginning of the list
    
}
