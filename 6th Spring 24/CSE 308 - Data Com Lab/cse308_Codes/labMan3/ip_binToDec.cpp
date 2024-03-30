// Bismillahir Rahmanir Rahim
// jahidulZaid

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back

int main() {

    string dottedBinaryIP;
    cin >> dottedBinaryIP;

    stringstream ss(dottedBinaryIP);
    string octet;
    string binaryIP = "";
    while (getline(ss, octet, '.')) {
        binaryIP += octet;
    }
    bitset<32> binary(binaryIP);
    unsigned long decimalIP = binary.to_ulong();

    unsigned int octets[4];
    octets[0] = (decimalIP >> 24) & 0xFF;
    octets[1] = (decimalIP >> 16) & 0xFF;
    octets[2] = (decimalIP >> 8) & 0xFF;
    octets[3] = decimalIP & 0xFF;

    for (int i = 0; i < 4; ++i) {
        cout << octets[i];
        if (i < 3) cout << ".";
    }
    cout << endl;

    return 0;
}
