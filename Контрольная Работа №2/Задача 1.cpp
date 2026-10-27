#include <iostream>

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Ошибка: размер массива должен быть больше нуля." << std::endl;
        return 1;
    }

    int* arr = new int[n];

    std::cout << "Введите " << n << " элементов массива:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма элементов с четными индексами: " << sum << std::endl;

    delete[] arr;
    return 0;
}
