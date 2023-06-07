#include <iostream>

int calcFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i += 2) {
        factorial *= i;
    }
    return factorial;
}

int calc_Denominator(int n) {
    int evenFactorial = 1;
    for (int i = 2; i <= n; i += 2) {
        evenFactorial *= i;
    }
    return evenFactorial;
}

double calculator(int n) {
    int oddFactorial = calcFactorial(n);
    int evenFactorial = calc_Denominator(n);
    double result = (oddFactorial) / evenFactorial;
    return result;
}

int main() {
    int n;
    std::cout << "Enter an even number: ";
    std::cin >> n;

    double result = calculator(n);
    std::cout << "Odd to even factorial result: " << result << std::endl;

    return 0;
}
