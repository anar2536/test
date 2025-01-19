#include <iostream>
#include <vector>

using namespace std;

int getSecondLargest(vector <int>& arr,int first,int second,int index) {
	if (index == arr.size() - 1) {
		if (arr[index] > first) {
			second = first;
			first = arr[index];
		}
		else if (arr[index] < first && arr[index] > second) {
			second = arr[index];
		}
		return second;
	}
	if (arr[index] > first) {
		second = first;
		first = arr[index];
	}
	else if (arr[index] < first && arr[index] > second) {
		second = arr[index];
	}
	return getSecondLargest(arr, first, second, index + 1);
}

//int main() {
//	vector<int> arr = { 12, 35, 1, 10, 340, 1 };
//	cout << getSecondLargest(arr,-1,-1,0);
//}