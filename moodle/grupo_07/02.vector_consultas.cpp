#include <iostream>
#include <vector>

using namespace std;

vector<int> matchingStrings(vector<string> input, vector<string> query) {
    vector<int> result;
    for (int i = 0; i < query.size(); i++) {
        int count = 0;
        for (int j = 0; j < input.size(); j++) {
            if (query[i] == input[j]) {
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    int size_input;
    cin >> size_input;
    vector<string> input;
    for (int i = 0; i < size_input; i++) {
        string word;
        cin >> word;
        input.push_back(word);
    }

    int size_query;
    cin >> size_query;
    vector<string> query;
    for (int i = 0; i < size_query; i++) {
        string word;
        cin >> word;
        query.push_back(word);
    }

    vector<int> result = matchingStrings(input, query);

    for (int i = 0; i < size_query - 1; i++) {
        cout << result[i] << " ";
    }
    cout << result[size_query - 1] << endl;
}