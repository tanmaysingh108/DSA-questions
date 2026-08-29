#include <stdio.h>
int largest(int arr[], int n) {
    // Code Here
    int _size= n-1;
    int _ind=0;
    for(;_size>0;_size--){
        int temp;
        if (arr[_ind]>arr[_ind+1]){
            temp=arr[_ind];
            arr[_ind]=arr[_ind+1];
            arr[_ind+1]=temp;
        }
        _ind+=1;
    }
    return(arr[n-1]);
}