#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "World";

    // Concatenation
    string result = str1 + " " + str2;
    cout << "Concatenated string: " << result << endl;

    // Length
    cout << "Length of str1: " << str1.length() << endl;

    // Accessing individual characters
    cout << "First character of str2: " << str2[0] << endl;

    // Substring
    string substr = str1.substr(1, 3);
    cout << "Substring of str1: " << substr << endl;

    // Find
    size_t pos = str2.find("rld");
    if (pos != string::npos) {
        cout << "Substring found at position: " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    return 0;
}