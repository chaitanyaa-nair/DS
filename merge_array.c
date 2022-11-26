//showing segmentation fault - need to debug

#include <stdio.h>
void merge (int arr[], int a, int b, int c);
void mergesort(int arr[], int s, int e);

int main (){
    //create an array using user input 
    int n, i;
    printf("Enter the length of the array:");
    scanf ("%d", &n);

    //checking if n is a non-zero positive number
    if (n <= 0){
        printf("Error, please enter a non-zero positive number.");
    }

    int arr[n];
    //taking inputs into the array
    printf("Enter the elements:");
    for (i=0; i<n; i++){
        scanf ("%d", &arr[i]);
        }
    printf("\n The unsorted array is:\n");
        
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
        }
    
    mergesort(arr, 0, n-1);
    
    printf("\n The sorted array is:\n");
        
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
        }
    }

//function that combines two subarrays together
void merge (int arr[], int a, int b, int c){
    int l = b - a + 1, l2= c - b;

    int X[l], Y[l2];

    for (int i=0; i<l; i++){
        X[i] = arr[a+i];
    }
    
    for (int j=0; j<l2; j++){
        Y[j] = arr[b+1+j];
    }

    int i=0, j=0, k=a;

    while (i<l && j <l2){
        if (X[i]<= Y [j]){
            arr[k] = X[i];
            i++;
        }
        else{
            arr[k]=Y[j];
            j++;
        }
        k++;
    }
}

void mergesort(int arr[], int s, int e){
    if (s < e){
        //find midpoint
        int m = s + (e-1)/ 2 ;
        //call recursively
        mergesort(arr, 1, m);
        mergesort (arr, m, e);

        //once partitioned, sort and combine
        merge(arr, s, m, e);
    }
}
