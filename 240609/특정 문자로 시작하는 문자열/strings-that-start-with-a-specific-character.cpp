#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

int main() {
    // input
    int n;
    cin >> n;

    string* word_list = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> word_list[i];
    }

    char target;
    cin >> target;

    // implement
    int cnt = 0;
    float total_len = 0;
    for (int i = 0; i < n; i++) {
        if (word_list[i][0] == target) {
            cnt++;
            total_len += word_list[i].length();
        }   
    }

    cout << cnt << " " << fixed << setprecision(2) << total_len / cnt;

    // delete
    delete[] word_list;

    return 0;
}