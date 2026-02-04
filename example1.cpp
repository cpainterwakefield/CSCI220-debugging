#include <iostream>
#include <vector>

using namespace std;

int get_vec_val(const vector<int> &vec, size_t index) {
    return vec.at(index);
}

int maximum_of_vec(const vector<int> &numbers) {
    int current_max = get_vec_val(numbers, 0);
    for (size_t j = 1; j < numbers.size(); j++) {
        int next_val = get_vec_val(numbers, j);
        if (next_val > current_max) {
            current_max = next_val;
        }
    }
    return current_max;
}

int main() {
    vector<vector<int>> series = {
        { 100, 100, 100, 100, 100 },
        { 0, 0, 0, 0 },
        { },
        { 100, -100, 0 },
        { 6, 147, 210, 93, 104, 44, 180 }
    };

    for (const auto& v: series) {
        cout << maximum_of_vec(v) << endl;
    }

    return 0;
}