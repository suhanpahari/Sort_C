#include<stdio.h>

int binarysearch(int arr[], int n, int t){

    int low = 0;
    int high = n - 1;
    int mid;

    while (high >= low){

        int mid = low + (high - low) / 2;

        if(arr[mid] == t){
        return mid;
        }
        else if(arr[mid] > t){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
        return -1; 
    }


}


int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = 5;



}