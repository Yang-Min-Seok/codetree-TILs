#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string s;
    cin >> s;

    int s_len = s.length();
    s.erase(s_len - 2, 1);
    s.erase(1, 1);
    
    cout << s;
    return 0;
}