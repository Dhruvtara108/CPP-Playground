#include <iostream>
int main() {

    int first_number {9};//statement in c++
    int second_number {9};

    std::cout << "First Number:" << first_number <<std::endl;
    std::cout << "Second Number:" << second_number << std::endl;

    int sum = first_number  + second_number;
    std::cout << "SUM = " << sum;
    return 0;
}