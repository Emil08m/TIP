#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Саркисян Эмиль Грачьявич ЭФБО-13-26" << std::endl;
    std::srand(static_cast<unsigned int>(std::time(0)));

    int rows, cols;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    if (rows <= 0 || cols <= 0) {
        std::cout << "Размеры массива должны быть положительными." << std::endl;
        return 1;
    }

    int** arr = new int*[rows];
    long long totalSum = 0;

    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = std::rand() % 100;
            totalSum += arr[i][j];
        }
    }

    double average = static_cast<double>(totalSum) / (rows * cols);
    std::cout << "Среднее значение всех элементов: " << average << std::endl;

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
