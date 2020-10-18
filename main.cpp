#include <iostream>
#include <vector>

using namespace std;

int LZZ(vector<int> sequence, int n) {
    vector<int> difference;
    vector<vector<int>> L(n - 1);

    for (int i = 1; i < n; i++) {
        difference.push_back(sequence.at(i) - sequence.at(i - 1));
    }

    L[0].push_back(sequence.at(0));
    L[0].push_back(sequence.at(1));

    int maxLen = 1, maxIndex = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < i; j++) {
            if (((difference.at(j) > 0 and difference.at(i) < 0) or (difference.at(j) < 0 and difference.at(i) > 0)) and
                (L.at(j).size() - 1 > L.at(i).size())) {
                L[i] = L[j];
            }
        }
        L[i].push_back(sequence.at(i + 1));
        if (maxLen < L.at(i).size() - 1) {
            maxLen = L.at(i).size() - 1;
            maxIndex = i;
        }
    }

    for (int i: L[maxIndex])
        cout << i << " ";
    cout << endl;

    return L[maxIndex].size();
}

int main() {

    vector<int> arr;
    /*arr.push_back(1);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(5);
    */
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);

    cout << LZZ(arr, arr.size());
    return 0;
}
