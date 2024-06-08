#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    string sentence;
    int len = 0, a_cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> sentence;
        int len_of_sentence = sentence.length();
        len += len_of_sentence;
        if (sentence[0] == 'a') {
            a_cnt++;
        } 
    }

    cout << len << " " << a_cnt;

    return 0;
}