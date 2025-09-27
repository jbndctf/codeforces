#include <iostream>
#include <string>
using namespace std;
int main() {
    string command;
    int counter = 0;
    int people = 0;
    while (getline(cin, command)) {
        if (command[0] == '+') {
            people++;
        } else if (command[0] == '-') {
            people--;
        } else {
            counter += people * (command.size() - command.find(":") - 1);
        }
    }
    cout << counter << endl;
    return 0;
}
