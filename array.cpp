#include <iostream>
using namespace std;

int main() {

    /* 
       1. ARRAY DECLARATION
    */

    int arr[5] = {1, 5, 6, 8, 9};   // fixed size array
    int nums[10];                  // array with extra space for insertion

    /* 
       2. ACCESSING ELEMENT
     */

    cout << "arr[2] = " << arr[2] << endl;

    /* 
       3. TRAVERSING ARRAY
    */

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements in arr:" << endl;
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    /* 
       4. TAKING INPUT FROM USER
       (Using variable-length array
        - works in CP, not standard)
     */

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int userArray[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> userArray[i];
    }

    /* 
       5. ARRAY INSERTION (CORE DSA)
    */

    // Initial values in nums
    nums[0] = 3;
    nums[1] = 5;
    nums[2] = 6;

    int size = 3;          // current number of elements in nums
    int index = 0;         // position where we want to insert
    int value = 9;         // value to insert

    // Step 1: Shift elements to the right
    for (int i = size; i > index; i--) {
        nums[i] = nums[i - 1];
    }

    // Step 2: Insert value
    nums[index] = value;

    // Step 3: Increase size
    size++;

    /* -----------------------------
       6. PRINT UPDATED ARRAY
    -------------------------------- */

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    /* deleting an element at particular index suppose  index =2 and value =30
    array = {10,20,30,40,50} shift element at left */

    int integers[5] = {10, 20, 30, 40, 50};
    int number = 5;
    int ind = 2;

    // delete element at index
    for(int i = ind; i < number - 1; i++) {
     integers[i] = integers[i + 1];
    }
    n--;

    // print updated array
    for(int i = 0; i < number; i++) {
         cout << integers[i] << " ";
    }

    //linear search
    string fruits[5] = {"apple", "banana", "kiwi", "mango", "orange"};
    string key="orange";
    for(int i=0 ; i<5; i++){
        if(fruits[i]==key)
        cout<<endl<<key<<" is present at index "<<i;
    }

    //binary search
    int start=0, end=5;
    
    while(start<=end){
        int mid = start + (end - start) / 2;

        if(fruits[mid]==key){
        cout<<endl<<" element found at index "<<mid<<"vusing binary search";
        break;
        }
        else if(fruits[mid] < key)
        start = mid + 1;
        else if(fruits[mid] > key)
        end = mid -1;
    }

    return 0;
}
