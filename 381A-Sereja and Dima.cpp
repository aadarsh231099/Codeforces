//https://codeforces.com/contest/381/problem/A
//Sereja and Dima
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0, right = n - 1;
    int sereja_score = 0, dima_score = 0;

    bool sereja_turn = true;
    while (left <= right) {
        int card_to_play;
        if (cards[left] > cards[right]) {
            card_to_play = cards[left];
            left++;
        } else {
            card_to_play = cards[right];
            right--;
        }

        if (sereja_turn) {
            sereja_score += card_to_play;
        } else {
            dima_score += card_to_play;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja_score << " " << dima_score << endl;

    return 0;
}
