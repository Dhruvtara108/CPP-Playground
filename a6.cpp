#include <iostream>
int MUL(int A , int B){
    int result = A*B;
    return result; 
}
int main()
{
    std::cout << "Product = " << MUL(22,4);
    return 0;
}