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


char checkIPAddressClass(const string& ipAddress) {
    // Split by '.'
    stringstream ss(ipAddress);
    string octet;
    getline(ss, octet, '.');
    int firstOctet = stoi(octet);

    if (firstOctet >= 1 && firstOctet <= 126)
        return 'A';
    else if (firstOctet >= 128 && firstOctet <= 191)
        return 'B';
    else if (firstOctet >= 192 && firstOctet <= 223)
        return 'C';
    else
        return '0';
}


string binaryToDecimal(const string& binaryIP) {
    string decimalIP = "";
    for (int i = 0; i < 32; i += 8) {
        string octet = binaryIP.substr(i, 8);
        bitset<8> bits(octet);
        decimalIP += to_string(bits.to_ulong());
        decimalIP += ".";
    }
    // Remove the last '.'
    decimalIP.pop_back();
    return decimalIP;
}
string decimalToBinary(const string& decimalIP) {
    stringstream ss(decimalIP);
    string octet;
    string binaryIP = "";
    while (getline(ss, octet, '.')) {
        int value = stoi(octet);
        bitset<8> bits(value);
        binaryIP += bits.to_string();
        binaryIP += ".";
    }
    // Remove the last '.'
    binaryIP.pop_back();
    return binaryIP;
}
char inputIPAddressClass() {
    cout << "Enter the IP address class (A, B, or C): ";
    char ipClass;
    cin >> ipClass;
    ipClass = toupper(ipClass); 
    if (ipClass != 'A' && ipClass != 'B' && ipClass != 'C') {
        cout << "Invalid IP address class." << endl;
        return '0'; 
    }
    return ipClass;
}
int main() {
    char ipClass = inputIPAddressClass();

    if (ipClass == '0') {
        return 1;
    }
    string ipAddress;
    cout << "Enter an IP address: ";
    cin >> ipAddress;

    cout << "Options:" << endl;
    cout << "1. Convert to binary" << endl;
    cout << "2. Convert from binary" << endl;
    cout << "Enter your choice (1 or 2): ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        string binaryIP = decimalToBinary(ipAddress);
        cout << "Binary IP address: " << binaryIP << endl;
    } else if (choice == 2) {
        string decimalIP = binaryToDecimal(ipAddress);
        cout << "Decimal IP address: " << decimalIP << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
