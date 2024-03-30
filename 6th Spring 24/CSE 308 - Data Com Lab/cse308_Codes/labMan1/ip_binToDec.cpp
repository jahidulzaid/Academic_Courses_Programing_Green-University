#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Function to convert IPv4 address to binary
void ipv4_to_binary(const string& ipv4_address) {
    istringstream iss(ipv4_address);
    string token;
    int binary[32] = {0};
    int i = 0;

    // Tokenize the IPv4 address
    while (getline(iss, token, '.')) {
        int octet = stoi(token); // Convert token to integer
        // Convert octet to binary
        for (int j = 7; j >= 0; j--) {
            binary[i++] = (octet >> j) & 1;
        }
    }

    // Print the binary representation
    for (int k = 0; k < 32; k++) {
        cout << binary[k];
        if ((k + 1) % 8 == 0) {
            cout << ".";

            
        }
    }
    cout << endl;
}

int main() {
    string ipv4_address; // IPv4 address string (e.g., "192.168.1.1")

    // cout << "Enter an IPv4 address: ";
    getline(cin, ipv4_address);

    // cout << "Binary representation: ";
    ipv4_to_binary(ipv4_address);

    return 0;
}
