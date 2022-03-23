#include <iostream>
#include <vector>

int getMax(std::vector<int> vec) {
    int max = vec[0];
    for(int i : vec) {
        if(i > max) {
            max = i;
        }
    }
    return max;
}

int getMin(std::vector<int> vec){
    int min = vec[0];
    for(int i : vec){
        if(i < min){
            min = i;
        }
    }
    return min;
}

int BinarySearch(std::vector<int> vec, int target){
    
    int low = 0;
    int high = vec.size();
    int mid = (low + high)/2;
    int guess = vec[mid];
    
    while(low<=high){
        if(guess==target){
            return mid;
        }
        else if(guess>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return 0;
}


int main()
{
    std::vector<int> vecTest = {1,2,3,4,5};
    
    std::cout<<"Largest number: "<< getMax(vecTest)<<std::endl;
    std::cout<<"Smallest number: " <<getMin(vecTest)<<std::endl;
    std::cout<<"Binary search: " <<BinarySearch(vecTest,3)<<std::endl;

    return 0;
}
