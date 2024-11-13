#include<iostream>
#include<string>
using namespace std;

template <typename T>
void binarySearch(int n, int q) {
    T query;
    T* data = new T[n];

 
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

  
    for (int i = 0; i < q; i++) {
        cin >> query;
        int left = 0, right = n - 1;
        bool found = false;

      
        while (left <= right) {
            int mid = (left + right) / 2;
            if (data[mid] < query) {
                left = mid + 1;
            }
            else if (data[mid] > query) {
                right = mid - 1;
            }
            else {
                cout << mid << '\n';  
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << '\n';  
    }

    delete[] data; 
int main() {
    char type;
    int n = 0, q = 0;

    while (cin >> type >> n >> q) {
        if (type == 'i') {
            binarySearch<int>(n, q);
        }
        if (type == 's') {
            binarySearch<string>(n, q);
        }
    }

    return 0;
}
