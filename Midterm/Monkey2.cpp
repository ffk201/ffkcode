#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char S[100000];
    
    while (cin.getline(S, 100000)) {
        int len = strlen(S);
        char characters[100000];
        int charIndex = 0;

        // Collect all non-space characters
        for (int i = 0; i < len; ++i) {
            if (S[i] != ' ') {
                characters[charIndex++] = S[i];
            }
        }

        // Sort the collected characters
        sort(characters, characters + charIndex);

        // Print the sorted characters
        for (int i = 0; i < charIndex; ++i) {
            cout << characters[i];
        }
        
        cout << endl; // Print newline after each input line is processed
    }

    return 0;
}
