#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long validSubstrings = 0;
    int lastForbiddenStart = -1;

    for (int end = 0; end < static_cast<int>(s.length()); ++end) {
        if (end >= 2 && s[end - 2] == 'a' && s[end - 1] == 'b' && s[end] == 'c') {
            lastForbiddenStart = end - 2;
        }

        validSubstrings += end - lastForbiddenStart;
    }

    cout << validSubstrings << endl;
    return 0;
}