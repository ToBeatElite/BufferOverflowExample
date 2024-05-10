/*

visual studio project taken from here so i dont have to 
mess with all the build configs, security settings, etc
https://github.com/Andy53/BufferOverflowExample/tree/master

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;
extern "C" void gadgets();


void exploitable(const char* p, int len) {
    char buffer[700];
    memcpy(buffer, p, len);
}

int main() {
    string inputFile = "";
    string inputText = "";

    cout << "Please enter filename:\n";
    cin >> inputFile;

    ifstream t(inputFile);
    string str((std::istreambuf_iterator<char>(t)),
    istreambuf_iterator<char>());
    inputText = str;

    exploitable(inputText.c_str(), inputText.size());

    return 0;
}