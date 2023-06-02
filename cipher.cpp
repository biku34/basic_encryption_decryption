#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;
void decryption();
void encryption() {
    cin.ignore();
    char input[50],copy[50];
    cout << "Welcome to the encryption bank"<<endl;
    cout << "Enter the text : "<<endl;
    cin.getline(input,50);
    strncpy(copy,input,50);
    int length = strlen(input);
    int gap;
    cout << "Enter the amount of gap in characters :  ";
    cin >> gap;
    for (int i = 0; i < length; i++) {
        if (isalpha(input[i])) {
            input[i] = toupper(input[i]);
            input[i] = ((input[i] - 'A' + gap) % 26) + 'A';
        }
    }
     cout << "Original: " << copy << endl;
    cout << "Encrypted Mesaage : " << input;
}
void decryption()
{
    cin.ignore();
    char input[50],copy[50];
    cout << "Welcome to the Decryption bank"<<endl;
    cin.getline(input,50);
    strncpy(copy,input,50);
    int length = strlen(input);
    int gap;
    cout << "Enter the amount of gap in characters :  ";
    cin >> gap;
    for (int i = 0; i < length; i++) {
        if (isalpha(input[i])) {
            input[i] = toupper(input[i]);
            input[i] = ((input[i] - 'A' - gap + 26) % 26) + 'A';
        }
    }
     cout << "Original: " << copy << endl;
    cout << "Decrypted Mesaage : " << input;
}
int main() {
    cout << "Welcome to the encryption and decryption bank " <<endl;
    int ch;
    cout << "Press 1 for encryption and 2 for decryption : ";
    cin >> ch;
    if(ch==1)
        encryption();
    else
        decryption();
    return 0;
}
