#include <iostream>
#include <algorithm>

using namespace std; 

bool isSorted(char arr[], int sizeArr){
    if(sizeArr == 1 || sizeArr == 0){
        return true;
    }

    for(int i = 1; i < sizeArr; i++){
        if(arr[i - 1] > arr[i]){
            return false;
        }
    }

    return true;
}

int binarySearch(char arr[], int l, int r, int x) 
{ 
    if(!isSorted(arr, r)){
        return 0;
    }else{
        while (l <= r) { 
            int m = l + (r - l) / 2; 
    
            // Check if x is present at mid 
            if (arr[m] == x) 
                return m; 
    
            // If x greater, ignore left half 
            if (arr[m] < x) 
                l = m + 1; 
    
            // If x is smaller, ignore right half 
            else
                r = m - 1; 
        } 

        return -1;  
    }
} 
  
int main() 
{   
    // char elements[] = {'a', 'd', 'e', 'i', 'l', 'o', 'q', 's', 't', 'y'};
    char elements[] = {'a', 'b', 'c', 'd'};
    char x = 'a';
    int n = sizeof(elements) / sizeof(elements[0]) - 1; 
    int result = binarySearch(elements, 0, n, x); 

    system("cls");
    if(result == -1){
        cout << "Element is not present in array";
    }else if(result == 0){
        cout << "The array is not Sorted";
    }else{
        cout << "Element is present at index " << result; 
    }
    // cout << isSorted(elements, 10);
} 