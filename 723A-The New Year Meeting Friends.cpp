//https://codeforces.com/problemset/problem/723/A
//The New Year: Meeting Friends
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int points[] = {x1, x2, x3};
    sort(points, points + 3);

    int median = points[1];

    int total_distance = abs(median - x1) + abs(median - x2) + abs(median - x3);

    cout << total_distance << endl;

    return 0;
}