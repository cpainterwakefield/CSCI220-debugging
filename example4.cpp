#include <iostream>
#include <vector>

using namespace std;

int find_max(const vector<int> &numbers) {
    int greatest;
    for (int x: numbers) {
        greatest = 0;
        if (x > greatest) {
            greatest = x;
        }
    }
    return greatest;
}

int main() {
    vector<int> vec = { 7, 10, 2, 0, 14, 31, 9 };
    cout << find_max(vec) << endl;
    return 0;
}