#include <iostream>
#include <vector>
#include <string>
using namespace std;

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(vector<string> *v){
    for (auto str: *v){
        cout << str << " ";
    }
    cout << endl;
    // (*v).at(0) = "Funny";
}

void arr_display(int *arry, int sentinel){
    while (*arry != sentinel){
        cout << *arry++ << " ";
    }
    cout << endl;
}

int main(){

    // Example 1
    cout << "Example 1:" << endl;
    int value = 10;
    int *int_ptr = nullptr;
    // int_ptr = new int;

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value " << value << endl;

    // delete int_ptr;

    // Example 2
    cout << "--------------------" << endl;
    cout << "Example 2:" << endl;

    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;


    // Example 3
    cout << "--------------------" << endl;
    cout << "Example 3:" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    // Example 4
    cout << "--------------------" << endl;
    cout << "Example 4:" << endl;
    int scores[] = {100, 90, 80, 70, -1};
    arr_display(scores, -1);

    return 0;
}