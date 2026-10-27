#include <iostream>

void print2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Саркисян Эмиль Грачьявич ЭФБО-13-26" << std::endl;
    
    int rows = 3;
    int cols = 4;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = i * cols + j + 1; 
        }
    }

    std::cout << "Содержимое двумерного массива:" << std::endl;
    print2DArray(arr, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
