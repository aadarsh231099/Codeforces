//https://codeforces.com/contest/431/problem/A
//Black Square
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int totalCalories = 0;
    for (char c : s) {
        switch (c) {
            case '1':
                totalCalories += a1;
                break;
            case '2':
                totalCalories += a2;
                break;
            case '3':
                totalCalories += a3;
                break;
            case '4':
                totalCalories += a4;
                break;
        }
    }

    cout << totalCalories << endl;

    return 0;
}