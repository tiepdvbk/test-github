// Bài này gi?i theo phuong pháp tham lam
// Xem bài 14 tru?c

#include <iostream>
using namespace std;

const int MAX = 100;

// file in.txt du?c t? ch?c du?i d?ng
// Dòng 1: S? lu?ng m?nh giá
// Dòng 2: Các m?nh giá tuong ?ng
// Dòng 3: W - S? ti?n c?n d?i

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    int tien[MAX];
    for (int i = 0; i < n; ++i) {
        cin >> tien[i];
    }

    // S?p x?p ti?n theo m?nh giá gi?m d?n
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (tien[j] > tien[i]) {
                swap(tien[i], tien[j]);
            }
        }
    }

    int W;
    cin >> W;

    // S? lu?ng t?ng m?nh giá du?c luu ? m?ng soLuong
    int soLuong[MAX];

    // Ð?i ti?n
    for (int i = 0; i < n; ++i) {
        soLuong[i] = W / tien[i];
        W -= soLuong[i] * tien[i];
    }

    // Ki?m tra xem có th? d?i du?c hay không:
    if (W == 0) {
        for (int i = 0; i < n; ++i) {
            cout << tien[i] << "K: " << soLuong[i] << " to" << endl;
        }
    } else {
        cout << "Khong the doi duoc tien";
    }

    return 0;
}
