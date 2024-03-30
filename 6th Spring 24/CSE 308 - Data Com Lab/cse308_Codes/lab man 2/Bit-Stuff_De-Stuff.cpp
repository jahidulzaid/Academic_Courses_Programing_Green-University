// Bismillahir Rahmanir Rahim
// jahidul Islam
// 221002504

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back
#define ppb pop_back

void destuf(string input){
    int startFlag = input.find("01111110");
    int endFlag = input.rfind("01111110");
    string stuffedData = input.substr(startFlag + 8, endFlag - startFlag - 8);
    int size = stuffedData.size();
    vector<char> v;
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        v.push_back(stuffedData[i]);
        if (stuffedData[i] == '1') {
            cnt++;
            if (cnt == 5) {
                i++;
                cnt = 0;
            }
        } else {
            cnt = 0;
        }
    }
    // Print the de-stuffed data with the flags
    cout << "01111110";
    for (auto x : v) {
        cout << x;
    }
    cout << "01111110" << endl;
}
void stuffing(string input) {
    int startFlag = input.find("01111110");
    int endFlag = input.rfind("01111110");
    string destuffedData = input.substr(startFlag + 8, endFlag - startFlag - 8);    vector<char> stuffedData;
    int count = 0;
    for (char c : destuffedData) {
        stuffedData.push_back(c);
        if (c == '1') {
            count++;
            if (count == 5) {
                stuffedData.push_back('0'); // Insert extra '0' after five consecutive '1's
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    // Print the stuffed data with the flags
    cout << "01111110";
    for (char c : stuffedData) {
        cout << c;
    }
    cout << "01111110" << endl;
}
int main() {
    optimize();
    string stuff;
    getline(cin, stuff);
    string input;
    getline(cin, input);
    stuffing(stuff);
    destuf(input);
    return 0;
}
