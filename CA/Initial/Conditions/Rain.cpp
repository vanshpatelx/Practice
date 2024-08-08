#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Raining or Not? Say Yes or No: ";
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if (str == "yes") {
        cout << "Take umbrella!" << endl;
    } else {
        cout << "Bye!!" << endl;
    }

    return 0;
}
