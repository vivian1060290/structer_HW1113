#include <iostream>
#include <string>
using namespace std;

class DataHandler {
private:
    char type;  // ������� 'i' �� 's'
    int intD[30]; // ��Ƹ�ơA�̦h 30 ��
    string strD[30]; // �r���ơA�̦h 30 ��
    int n; // ��ƪ�����

public:
    // �غc�l��l�Ƹ��������Ū�����
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

    // �d�ߨÿ�X�ؼЪ�����
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
    // �d���ƥؼЪ����ޡA�䤣��h��^ -1
    int fInt(int t) {
        for (int i = 0; i < n; i++) {
            if (intD[i] == t) {
                return i;
            }
        }
        return -1;
    }

    // �d��r��ؼЪ����ޡA�䤣��h��^ -1
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
    char T;  // �������
    int n, q;  // ��Ƶ��ƩM�d�߼ƶq
    cin >> T >> n >> q;

    DataHandler handler(T, n);  // �إ߸�ƳB�z��
    handler.q(q);  // ����d��

    return 0;
}
