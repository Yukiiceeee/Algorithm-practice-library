#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> p;

const int N = 100010;

void solve(){
    int s,v;
    cin >> s >> v;
    int time = (s+v-1)/v + 10;
    int hour = time/60;
    int minute = time%60;
    if(hour < 8){
        if(minute == 0) cout << "0" << 8-hour << ":" << "00";
        else{
            if(minute <= 50) cout << "0" << 7-hour << ":" << 60-minute;
            else cout << "0" << 7-hour << ":0" << 60-minute;
        }
    }
    else{
        hour -= 8;
        if(minute == 0){
            if(hour <= 13) cout << 24-hour << ":" << "00";
            else cout << "0" << 24-hour << ":" << "00";
        }
        else{
            if(hour <= 13){
                if(minute <= 50) cout << 23-hour << ":" << 60-minute;
                else cout << 23-hour << ":0" << 60-minute;
            }
            else{
                if(minute <= 50) cout << "0" << 23-hour << ":" << 60-minute;
                else cout << "0" << 23-hour << ":0" << 60-minute;
            }
        }
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



