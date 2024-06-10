#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // input
    string sentence;
    cin >> sentence;
    
    int sentence_len = sentence.length(), cnt = 1;
    char curr_char = sentence[0];
    int compressed_length = 0;

    for (int i = 1; i < sentence_len; i++) {
        if (sentence[i] != curr_char) {
            compressed_length += 1 + to_string(cnt).length();
            curr_char = sentence[i];
            cnt = 1;
        } else {
            cnt++;
        }
    }
    compressed_length += 1 + to_string(cnt).length();
    cout << compressed_length << endl;

    
    cnt = 1;
    curr_char = sentence[0];
    for (int i = 0; i < sentence_len - 1; i++) {
        if (sentence[i] != sentence[i+1]) {
            cout << curr_char << cnt;
            curr_char = sentence[i+1];
            cnt = 1;
        } else{
            cnt ++;
        }
    }
    cout << curr_char << cnt;


    return 0;
}