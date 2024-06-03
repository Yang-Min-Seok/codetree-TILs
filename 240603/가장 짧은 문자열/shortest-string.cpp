#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int str1_len = str1.length(), str2_len = str2.length(), str3_len = str3.length();
    int len_list[3] = {str1_len, str2_len, str3_len};
    int max_diff = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (len_list[i] - len_list[j] > max_diff) {
                max_diff = len_list[i] - len_list[j];   
            }
        }
    }

    cout << max_diff;

    return 0;
}