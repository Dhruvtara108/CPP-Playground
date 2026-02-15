#include <iostream>
    int PDF(int X, int Y){ //PDF is predefined function
    int result (X*Y);
    return result;
}
int main(){

    int A{22};
    int B{44};
    int Sum = (A+B);

    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "Sum = " << Sum << std::endl;

    std::cout << "Output : " << PDF(12,12);
    
    return 0;
}