#include <iostream>  
#include <vector>  
  
std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3) {  
    std::vector<int> commonElements;  
    int i = 0, j = 0, k = 0;  
    int n1 = arr1.size(), n2 = arr2.size(), n3 = arr3.size();  
  
    while (i < n1 && j < n2 && k < n3) {  
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {  
            commonElements.push_back(arr1[i]);  
            i++;  
            j++;  
            k++;  
        } else if (arr1[i] < arr2[j]) {  
            i++;  
        } else if (arr2[j] < arr3[k]) {  
            j++;  
        } else {  
            k++;  
        }  
    }  
  
    return commonElements;  
}  
  
int main() {  
    std::vector<int> arr1 = {1, 3, 5, 7, 9};  
    std::vector<int> arr2 = {2, 3, 5, 7, 8, 10};  
    std::vector<int> arr3 = {3, 4, 5, 6, 7};  
  
    std::vector<int> common = findCommonElements(arr1, arr2, arr3);  
  
    for (int num : common) {  
        std::cout << num << " ";  
    }  
  
    return 0;  
}