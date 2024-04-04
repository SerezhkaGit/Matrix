#include <iostream>
#include "math_functions.h"
#include "matrix.h"

int main() {
    cout << "Sin(30 degrees): " << MathFunctions::sine(30 * 3.14159 / 180) << std::endl;
    cout << "Cos(45 degrees): " << MathFunctions::cosine(45 * 3.14159 / 180) << std::endl;

    Matrix A(2, 3);
    A.setValue(0, 0, 1);
    A.setValue(0, 1, 2);
    A.setValue(0, 2, 3);
    A.setValue(1, 0, 4);
    A.setValue(1, 1, 5);
    A.setValue(1, 2, 6);

    Matrix B(3, 2);
    B.setValue(0, 0, 7);
    B.setValue(0, 1, 8);
    B.setValue(1, 0, 9);
    B.setValue(1, 1, 10);
    B.setValue(2, 0, 11);
    B.setValue(2, 1, 12);

    cout << "Matrix A:" << std::endl;
    A.print();

    cout << "Matrix B:" << std::endl;
    B.print();

    Matrix C = A * B;
    cout << "Matrix C = A * B:" << std::endl;
    C.print();

    return 0;
}
