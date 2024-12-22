#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;

    // Read all lines until EOF
    while (getline(cin, input)) {
        stringstream ss(input);
        string word;

        // Process each word in the input line
        while (ss >> word) {
            // Sort the word
            sort(word.begin(), word.end());
            // Print the sorted word without additional spaces
            cout << word;
        }

        // Print a newline after each line is processed
        cout << endl;
    }

    return 0;
}
