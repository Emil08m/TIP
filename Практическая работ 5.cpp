// 1 Задание

/*

#include <iostream>

int main() {
    double X, Y;
    
    std::cin >> X;
    std::cin >> Y;

    double current_sum = X;
    int day = 1;

    while (current_sum < Y) 
    {
            current_sum *= 1.1;
            day++;
    }

    std::cout << day << std::endl;

    return 0;
}
*/

// 2 Задание
/*
#include <iostream>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    char commands[200][3]; 
    int cmd_count = 0;
    long long current = B;

    while (current < A) {
        if (current % 2 == 0) {
            current *= 2;
            commands[cmd_count][0] = ':';
            commands[cmd_count][1] = '2';
            commands[cmd_count][2] = '\0';
        } else {
            current += 1;
            commands[cmd_count][0] = '-';
            commands[cmd_count][1] = '1';
            commands[cmd_count][2] = '\0';
        }
        cmd_count++;
    }

    while (current > A) {
        current -= 1;
        commands[cmd_count][0] = '-';
        commands[cmd_count][1] = '1';
        commands[cmd_count][2] = '\0';
        cmd_count++;
    }

    for (int i = 0; i < cmd_count; ++i) {
        cout << commands[i] << endl;
    }

    return 0;
}
*/

// 3 Задание
/*
#include <iostream>

using namespace std;

int main() {
    int N, target_pair;
    cin >> N >> target_pair;

    int students[1000]; 
    int top = -1;
    int gone_to_kfc = 0;

    for (int i = 0; i < N; ++i) {
        int student;
        cin >> student;

        if (student == target_pair) {
            if (top != -1 && students[top] == target_pair) {
                top--;
                gone_to_kfc += 2;
            } else {
                top++;
                students[top] = student;
            }
        }
    }

    cout << gone_to_kfc << endl;

    return 0;
}
*/