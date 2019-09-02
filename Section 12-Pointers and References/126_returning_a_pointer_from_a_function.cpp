#include <iostream>
#include <vector>
#include <string>
using namespace std;

int *create_array(size_t size, int init_value){
    int *my_array = {nullptr};
    my_array = new int[size]; // pointing to the memory address of first element in array
    for (size_t i =0; i<size; ++i){
        *(my_array+i) = init_value;
    }
    return my_array;
}

void display(const int *const array, size_t size){
    for (size_t i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int *my_array; // garbage pointer
    size_t size = 10;
    int init_value = 5;

    my_array = create_array(size, init_value);
    display(my_array, size);

    delete []my_array;

    vector<string> stooges {"Aslan", "Sunny", "Weinberg"};
    for (auto str:stooges){
        cout << str << " ";
    }
    cout << endl;
}

// int *largest_int(int *int_ptr1, int *int_ptr2){
//     if (*int_ptr1 > *int_ptr2){
//         return int_ptr1;
//     }
//     else 
//         return int_ptr2;
// } 

// int *create_array(size_t size, int init_value = 0){
//     int *new_storage = {nullptr}; // allocate memory 
//     new_storage = new int[size];

//     for (size_t i=0; i < size; ++i){
//         *(new_storage+i) = init_value;
//     }
//     return new_storage;
// }

// int main(){
//     // Example 1
//     int a{100};
//     int b{200};

//     int *largest_ptr{nullptr};

//     largest_ptr = largest_int(&a, &b);
//     cout << *largest_ptr << endl;

//     // Example 2
//     int *my_array;

//     my_array = create_array(100,20);
//     // use it

//     delete []my_array; // free up the memory after using it
//     return 0;
// }