#include <iostream>

int binarySearch(int arr[], int target) {
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]);
    int mid = low + high;
    int guess = arr[mid];

    while (low <= high) {
        if (guess == target) {
            return mid;
        }
        else if (guess > high) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

}

int main() {

    int arr2[5] = { 1,2,3,4,5 };
    //std::cout<< sizeof(arr)/sizeof(arr[0]);
    std::cout << binarySearch(arr2, 3);

    return 0;
}