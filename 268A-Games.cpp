//https://codeforces.com/problemset/problem/268/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;


    map<int, pair<int, int>> colors;


    for (int i = 1; i <= n; i++) {
        int home_color, guest_color;
        cin >> home_color >> guest_color;
        colors[i] = make_pair(home_color, guest_color);
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) { 
                int host_color = colors[i].first;
                int guest_color = colors[j].second;
                if (host_color == guest_color) {
                    count++;
                }
            }
        }
    }


    cout << count << endl;

    return 0;
}
