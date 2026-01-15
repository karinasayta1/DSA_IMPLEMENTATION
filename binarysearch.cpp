#include <iostream>
using namespace std;


int binarysearch(int arr[], int size, int key){
        int start = 0;
        int end = size-1;
        

        while(start<=end){
            int mid = start + (end - start) / 2;
            if(arr[mid]==key) return mid;

            if(arr[mid]<key){
                start= mid + 1;
            }
            else end = mid-1;
        }
        return -1;

    }

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key =8, size=10;
    int i = binarysearch(arr, size,key);
    cout << " Element "<<key <<" found at index "<<i ;
    return 0;

}