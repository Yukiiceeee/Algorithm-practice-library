#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        // 请自行完成问题 3 的代码
        cout << 3 << endl << 12 << endl << 2;
    } else if (T == 4) {
        // 请自行完成问题 4 的代码
        cout << fixed << setprecision(3) << double(500.0/3.0);
    } else if (T == 5) {
        // 请自行完成问题 5 的代码
        int ans = 480/32;
        cout << ans;
    } else if (T == 6) {
        // 请自行完成问题 6 的代码
        cout << sqrt(117);
    } else if (T == 7) {
        // 请自行完成问题 7 的代码
        cout << 110 << endl << 90 << endl << 0 << endl;
    } else if (T == 8) {
        // 请自行完成问题 8 的代码
        int r = 5;
        double pai = 3.141593;
        cout << 2.0*pai*r << endl;
        cout << pai*25.0 << endl;
        cout << 4.0*pai*r*r*r/3.0 << endl;
    } else if (T == 9) {
        // 请自行完成问题 9 的代码
        int ans = 0;
        cout << 22;
    } else if (T == 10) {
        // 请自行完成问题 10 的代码
        cout << 9;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout << 100.0/3.0;
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout << 13 << endl;
        cout << "R" << endl;
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
        int r1 = 4;
        int r2 = 10;
        double pai = 3.141593;
        double v = 4*(pai*r1*r1*r1 + pai*r2*r2*r2)/3;
        int ans = pow(v, 1.0/3);
        cout << ans;
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout << 50;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++){
        solve();
    }

    return 0;
}



