// 1 Задание
/*
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j < N - 1) {
                std::cout << 0;
            } else if (i + j == N - 1) {
                std::cout << 1;
            } else {
                std::cout << 2;
            }
            if (j < N - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

*/

// 2 Задание

/*
#include <iostream>

int main() {
    int N, M, W;
    std::cin >> N >> M >> W;

    int field[32][32] = {0};

    for (int k = 0; k < W; ++k) {
        int r, c;
        std::cin >> r >> c;
        field[r - 1][c - 1] = -1; 
    }

    int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (field[i][j] == -1) {
                for (int d = 0; d < 8; ++d) {
                    int ni = i + dr[d];
                    int nj = j + dc[d];
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M && field[ni][nj] != -1) {
                        field[ni][nj]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (field[i][j] == -1) {
                std::cout << "*";
            } else {
                std::cout << field[i][j];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

*/

// Задание 3

/*

#include <iostream>
#include <string>

int main() {
    int x, n;
    std::cin >> x >> n;

    std::string current = std::to_string(x);

    for (int step = 1; step < n; ++step) {
        std::string next = "";
        int len = current.length();

        for (int i = 0; i < len; ) {
            char digit = current[i];
            int count = 0;
            while (i < len && current[i] == digit) {
                count++;
                i++;
            }
            next += std::to_string(count);
            next += digit;
        }
        current = next;
    }

    std::cout << current << std::endl;

    return 0;
}

*/