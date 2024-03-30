// Bismillahir Rahmanir Rahim
// jahidulZaid
// 

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


string byteStuffing(const string& input, char flag, char escape) {
    string stuffed;
    for (char ch : input) {
        if (ch == flag || ch == escape) {
            stuffed += escape;  
        }
        stuffed += ch;
    }
    return stuffed;
}

string byteDestuffing(const string& input, char escape) {
    string destuffed;
    bool prevEscape = false;
    for (char ch : input) {
        if (ch == escape && !prevEscape) {
            prevEscape = true;
        } else {
            destuffed += ch;
            prevEscape = false;
        }
    }
    return destuffed;
}

int main() {
    char flag = 'F';  
    char escape = 'E';  

    string input;
    getline(cin, input);

    // stuffing
    string stuffed = byteStuffing(input, flag, escape);
    cout << "Byte stuffing: " << endl;
    cout <<  stuffed << endl;
    cout << endl;
    // De-stuffing
    string destuffed = byteDestuffing(stuffed, escape);
    cout << "Byte destuffing: " << endl;
    cout << destuffed << endl;

    return 0;
}