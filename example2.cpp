#include <iostream>
#include <string>

using namespace std;

class log {
public:
    size_t size;
    string* data;

    log() {
        size = 0;
        data = new string[size + 1];
        data[0] = "END";
    }
    // note: we omit the "big 3" here for readability only

    void append(string msg) {
        string* new_data = new string[size + 1];
        for (size_t i = 0; i < size; i++) {
            new_data[i] = data[i];
        }
        new_data[size] = msg;
        new_data[size + 1] = "END";
        size++;
    }

    void show() {
        for (size_t i = 0; i < size; i++) {
            cout << data[i] << endl;
        }
    }
};

int main() {
    log messages;
    messages.append("Good day");
    messages.append("Yo!");
    messages.append("Bon jour");
    messages.append("Top of the morning");
    messages.append("Hello");
    messages.show();
    return 0;
}