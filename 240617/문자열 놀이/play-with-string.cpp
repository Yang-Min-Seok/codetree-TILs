#include <iostream>
#include <string>
using namespace std;

void simulate(string &str, int order, char op1, char op2) {
    if (order == 1) {
        char temp = str[op1 - 1];
        str[op1 - 1] = str[op2 - 1];
        str[op2 - 1] = temp; 
    } else if (order == 2) {
        int str_len = str.length();
        for (int i = 0; i < str_len; i++) {
            if (str[i] == op1) {
                str[i] = op2;
            }
        }
    }
    cout << str << endl;
}

int main() {
    string str;
    int n;
    cin >> str >> n;

    int order;
    char op1, op2;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == 1) {
            int pos1, pos2;
            cin >> pos1 >> pos2;
            simulate(str, order, pos1, pos2);
        } else if (order == 2) {
            cin >> op1 >> op2;
            simulate(str, order, op1, op2);
        }
    }

    return 0;
}