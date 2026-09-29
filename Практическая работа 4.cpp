// 1

/*
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    long long A;
    char op;
    long long B;

    ss >> A >> op >> B;

    double result = 0;
    bool error = false;

    switch (op) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = (long long)A * B;
            break;
        case '/':
            if (B != 0) {
                result = (double)A / (double)B;
            } else {
                error = true;
            }
            break;
        default:
            error = true;
            break;
    }

    if (error) {
        cout << "Error";
    } else {
        if (result == (long long)result) {
            cout << (long long)result;
        } else {
            cout << result;
        }
    }

    return 0;
}
*/

// 2

/*
#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    if (n * m >= k && (k % n == 0 || k % m == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
*/

// 3

/*
#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };
    string symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    string result = "";
    
    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            result += symbols[i];
            num -= values[i];
        }
    }
    return result;
}

int main() {
    int X;
    cin >> X;
    
    if (X > 0 && X < 4000) {
        cout << intToRoman(X);
    } else {
        cout << "Error: Out of range (1-3999)";
    }

    return 0;
}
*/