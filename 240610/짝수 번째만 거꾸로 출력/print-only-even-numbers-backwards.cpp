#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cin >> sentence;
    int len_of_sentence = sentence.length();
    if (len_of_sentence % 2 == 0) {
        for (int i = len_of_sentence - 1; i >= 0; i-=2) {
            cout << sentence[i];
        }
    } else {
        for (int i = len_of_sentence - 2; i >= 0; i-=2) {
            cout << sentence[i];
        }
    }
    return 0;
}