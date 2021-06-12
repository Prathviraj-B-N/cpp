// ArrayADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

typedef struct Array {
    int* arr_ptr;
    int size;
    int length;
};

void display(Array a) {
    std::cout << "Array elements are: ";
    for (int i = 0; i < a.length; i++) {
        std::cout << a.arr_ptr[i]<<" ";
    }
    std::cout << std::endl;
}

int main()
{
    
    Array arr;
    int n=0;
    std::cout << "Enter size of array: ";
    std::cin >> arr.size;
    //in c :arr.arr_ptr = (int*)malloc(arr.size * sizeof(int));
    arr.arr_ptr = new int[arr.size]; //returns ptr by default
    std::cout << "Array Created!" << std::endl;

    
    while (1) {
        std::cout << "How many elements do you want to enter? : ";
        std::cin >> n;
        if (n <= arr.size) {
            std::cout << "Enter\n";
            for (int i = 0; i < n; i++) {
                std::cin >> arr.arr_ptr[i];
            }
            arr.length = n;
            break;
        }
        else {
            std::cout << "Please enter elements within range " << arr.size<<std::endl;
        }
    }
    
    display(arr);

    return 0;
}
