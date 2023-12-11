#include <iostream>
#include <vector>

template <typename T>
void Sort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
               
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    
    std::vector<int> numbers = { 64, 34, 25, 12, 22, 11, 90 };

    std::cout << "Unsorted vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

   Sort(numbers);

    std::cout << "\nSorted vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
