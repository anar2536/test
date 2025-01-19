#include <iostream>
#include <vector>

using namespace std;

vector <int> get3largest(vector <int>& arr, int index, int first, int second, int third,vector <int>& answer) {
    if (index == arr.size() - 1) {
        if (arr[index] > first) {
            third = second;
            second = first;
            first = arr[index];
        }
        else if (arr[index] < first && arr[index] > second) {
            third = second;
            second = arr[index];
        }
        else if (arr[index] < second && arr[index] > third) {
            third = arr[index];
        }
        if (first == INT_MIN)
            return answer;
        answer.push_back(first);
        if (second == INT_MIN)
            return answer;
        answer.push_back(second);
        if (third == INT_MIN)
            return answer;
        answer.push_back(third);
        return answer;
    }
    if (arr[index] > first) {
        third = second;
        second = first;
        first = arr[index];
    }
    else if (arr[index] < first && arr[index] > second) {
        third = second;
        second = arr[index];
    }
    else if (arr[index] < second && arr[index] > third) {
        third = arr[index];
    }
    return get3largest(arr, index + 1, first, second, third, answer);
}

int main() {
    vector<int> arr = { 12, 13, 1, 10, 34, 1 };
    vector <int> res1 = {};
    vector<int> res = get3largest(arr,0,INT_MIN, INT_MIN, INT_MIN,res1);
    for (int x : res)
        cout << x << " ";
    cout << endl;

    return 0;
}