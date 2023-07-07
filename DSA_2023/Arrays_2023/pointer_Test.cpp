#include<iostream>
#include<stdlib.h>

// void pointer_fn(int a){
//     int *ptr = &a;
//     std::cout << "ptr = " << ptr << std::endl;
//     std::cout << "*ptr = " << *ptr << std::endl;
//     *ptr = 10;
//     std::cout << " a = " << a << std::endl;
//     std::cout << " &a = " << &a << std::endl;
// }

void double_ptr(int a){
    int *ptr = &a;
    int **ptr1 = &ptr;
    std::cout << "**ptr1 = " << **ptr1 << std::endl;
    std::cout << "&ptr1 = " << &ptr1 << std::endl;
    std::cout << " *ptr = " << *ptr << std::endl;
    std::cout << " &ptr = " << &ptr << std::endl;
    std::cout << " a = " << a << std::endl;
    std::cout << " &a = " << &a << std::endl;
}



int main()
{
    int a = 5;
    double_ptr(a);
    return 0;
}