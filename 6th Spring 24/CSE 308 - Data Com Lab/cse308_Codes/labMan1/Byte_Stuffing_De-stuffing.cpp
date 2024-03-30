// Bismillahir Rahmanir Rahim
// jahidulZaid
// byteStuffingAlgorithm.

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

string byteStuffing(const string& data, const string& FLAG, const string& ESCAPE) {
    string stuffedData;
    stuffedData += FLAG;

    for (size_t i = 0; i < data.length(); ++i) {
        if (data.substr(i, FLAG.length()) == FLAG || data.substr(i, ESCAPE.length()) == ESCAPE) {
            stuffedData += ESCAPE;
        }
        stuffedData += data[i];
    }
    stuffedData += FLAG;
    return stuffedData;
}
int main() {
    string FLAG = "GALF";
    string ESCAPE = "EPACSE";

    string data;
    getline(cin, data);

    string stuffedData = byteStuffing(data, FLAG, ESCAPE);
    cout << stuffedData << endl;
    return 0;
}
