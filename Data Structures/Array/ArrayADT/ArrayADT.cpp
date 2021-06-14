#include <iostream>
#include <string>
// (.) operator works on objects , -> operator should be used for pointer to objects (x->y <=> (*x).y)
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

void append(Array *a) {
    int ele;
    std::cout<<"Enter value of the element: ";
     std::cin>>ele;
    if (a->length < a->size) {
        a->arr_ptr[a->length] = ele;
        a->length++;
        std::cout <<"Elements inserted"<<std::endl;
    }
    else {
        std::cout << "Array is full"<<std::endl;
    }
}

void insert(Array* a) {
     int ele, index;
     std::cout<<"Enter place where you want to insert: ";
     std::cin>>index;
     
     index--;
    
    if (index <= a->length) {
        for (int i = a->length-1; i >= index; i--) {
            a->arr_ptr[i + 1] = a->arr_ptr[i];
        }
        std::cout<<"Enter value of the element: ";
        std::cin>>ele;
        a->arr_ptr[index] = ele;
        a->length++;
        std::cout << "Elements inserted" << std::endl;
     }
     else {
        if(index>a->size)
            std::cout<<"You have selected an invalid index ,Consider resizing the array?"<<std::endl;
        else
            std::cout << "Array is full" << std::endl;
     }
}

void create(Array *arr){
    while (1) {
        int n=0;
        std::cout << "How many elements do you want to enter? : ";
        std::cin >> n;
        if (n <= arr->size) {
            std::cout << "Enter\n";
            for (int i = 0; i < n; i++) {
                std::cin >> arr->arr_ptr[i];
            }
            arr->length = n;
            break;
        }
        else {
            std::cout << "Please enter elements within range " << arr->size<<std::endl;
        }
    }
}

void main_dash(Array *arr,int choice)
{
    switch(choice){
        case 1: display(*arr);
        break;
        case 2: break;
        case 3: insert(arr);
        break;
        case 4: append(arr);
        break;
        case 5: break;
    };
    
}

int main(){
    
    Array arr;
    int choice;
    std::string options[] = {"1.display","2.check size","3.insert","4.append","5.resize"};//update size in forloop below if you edit this

    std::cout << "Enter size of array: ";
    std::cin >> arr.size;

    //in c :arr.arr_ptr = (int*)malloc(arr.size * sizeof(int));
    arr.arr_ptr = new int[arr.size]; //returns ptr by default
    std::cout << "Space allocated for Array!" << std::endl;
    create(&arr);
    
    while(1){
        std::cout<<"So, What do you want to do?"<<std::endl;
        for(int i=0;i<5;i++){
            std::cout<<options[i]<<std::endl;
        }
        
        std::cin>>choice;
        main_dash(&arr,choice);
    }
}