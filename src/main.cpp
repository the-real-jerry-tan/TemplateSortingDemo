/*
 * © 2024 Jerry Tan. All Rights Reserved.
 *
 * This software is the confidential and proprietary information of Jerry Tan
 * ("Confidential Information"). You shall not disclose such Confidential Information
 * and shall use it only in accordance with the terms under which this software
 * was distributed or otherwise published, and solely for the prior express purposes
 * explicitly communicated and agreed upon, and only for those specific permissible purposes.
 *
 * This software is provided "AS IS," without a warranty of any kind. All express or implied
 * conditions, representations, and warranties, including any implied warranty of merchantability,
 * fitness for a particular purpose, or non-infringement, are disclaimed, except to the extent
 * that such disclaimers are held to be legally invalid.
 */

// TemplateSortingDemo - A C++ template-based sorting demo
// This project demonstrates the use of C++ templates for sorting arrays of various types.

#include <iostream>
#include <algorithm>

// Generic template function to sort an array
template<typename T>
void sortArray(T arr[], int size) {
    std::sort(arr, arr + size); // Uses the standard library's sort algorithm
}

// Generic template function to print an array
template<typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Define an integer array
    int intArr[] = {5, 2, 9, 1, 5, 6};
    // Define a floating-point array
    float floatArr[] = {3.4, 2.1, 9.5, 4.4};

    // Sort the integer array
    std::cout << "Original int array: ";
    printArray(intArr, 6);
    sortArray(intArr, 6);
    std::cout << "Sorted int array: ";
    printArray(intArr, 6);

    // Sort the float array
    std::cout << "Original float array: ";
    printArray(floatArr, 4);
    sortArray(floatArr, 4);
    std::cout << "Sorted float array: ";
    printArray(floatArr, 4);

    return 0;
}
