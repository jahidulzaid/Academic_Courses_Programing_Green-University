// Bismillahir Rahmanir Rahim
// jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back
// #ifdef LOCAL
// #include "debug.h"
// #endif

// #ifdef ONLINE_JUDGE
// #include "debug.h"
// #endif
int main() {
    string s;
    cin >> s;
    int strSize = s.size();

    vector<char>data(strSize);

    for(int i = 0;i<strSize;i++){
        data[i] = s[i];
    }
    int cnt = 0;
    for (int i = 0; i < strSize; i++) {
        if (data[i] == '1') {
            cnt++;
        }
    }
    int c = strSize + 1;
    if (cnt % 2 == 0) {
/*
ths block add 1/0 at the begining of the string.
it needs to declare the vec size +1
        for (int i = c, j = c - 1; i > 0; i--, j--) {
            data[i] = data[j];
        }
*/
        // adds 1 at the end
        data.push_back('1');
    } else {
/*
ths block add 1/0 at the begining of the string.
it needs to declare the vec size +1
        for (int i = c, j = c - 1; i > 0; i--, j--) {
            data[i] = data[j];
        }
*/
        data.push_back('0');
    }
    for(auto x: data){
        cout << x;
    }
    cout<< endl;
    return 0;
}