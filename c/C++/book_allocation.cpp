#include <iostream>
#include <algorithm>
using namespace std;

int countstudent(int arr[], int n, int page) {
    int student = 1;
    long long pagesstudent = 0;
    for (int i = 0; i < n; i++) {
        if (pagesstudent + arr[i] <= page) {
            pagesstudent += arr[i];
        } else {
            student++;
            pagesstudent = arr[i]; // Reset for new student
        }
    }
    return student;
}

int findpage(int arr[], int n, int m) {
    if (m > n) return -1;

    int low = *max_element(arr, arr + n);
    int high = 0;
    for (int i = 0; i < n; i++) {
        high += arr[i];
    }

    int result = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int student = countstudent(arr, n, mid);
        if (student > m) {
            low = mid + 1;
        } else {
            result = mid;
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int m = 2;
    int ans = findpage(arr, 5, m);
    cout << "answer is " << ans << endl;
    return 0;
}
