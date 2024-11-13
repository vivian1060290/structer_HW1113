#include <iostream>
#include <string>
using namespace std;

class DataHandler {
private:
    char type;  // 資料類型 'i' 或 's'
    int intD[30]; // 整數資料，最多 30 筆
    string strD[30]; // 字串資料，最多 30 筆
    int n; // 資料的筆數

public:
    // 建構子初始化資料類型並讀取資料
    DataHandler(char t, int n) : type(t), n(n) {
        if (type == 'i') {
            for (int i = 0; i < n; i++) {
                cin >> intD[i];
            }
        } else if (type == 's') {
            for (int i = 0; i < n; i++) {
                cin >> strD[i];
            }
        }
    }

    // 查詢並輸出目標的索引
    void q(int q) {
        if (type == 'i') {
            for (int j = 0; j < q; j++) {
                int t;
                cin >> t;
                int index = fInt(t);
                cout << index << endl;
            }
        } else if (type == 's') {
            for (int j = 0; j < q; j++) {
                string t;
                cin >> t;
                int index = fStr(t);
                cout << index << endl;
            }
        }
    }

private:
    // 查找整數目標的索引，找不到則返回 -1
    int fInt(int t) {
        for (int i = 0; i < n; i++) {
            if (intD[i] == t) {
                return i;
            }
        }
        return -1;
    }

    // 查找字串目標的索引，找不到則返回 -1
    int fStr(const string& t) {
        for (int i = 0; i < n; i++) {
            if (strD[i] == t) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    char T;  // 資料類型
    int n, q;  // 資料筆數和查詢數量
    cin >> T >> n >> q;

    DataHandler handler(T, n);  // 建立資料處理器
    handler.q(q);  // 執行查詢

    return 0;
}
