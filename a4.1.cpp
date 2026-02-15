#include <iostream>
int addNum(int first_param, int second_param) {
    int result = first_param + second_param;
    return result;
}
int main(){

    int first_number {3};//statement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: "<<sum << std::endl;
    
    sum = addNum(12,8);
    std::cout << "Sum: " <<sum << std::endl;

    sum = addNum(13,99);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum = " << addNum(12,76) ;
   
   
    return 0;

}