#include<iostream>
using namespace std;

void replaceSpaces(char str[], int length) {
    int spaceCount = 0;

    // Count the number of spaces
    for(int i = 0; i < length; i++) {
        if(str[i] == ' ')
            spaceCount++;
    }

    // Calculate new length
    int newLength = length + spaceCount * 2;
    str[newLength] = '\0'; // null-terminate the final string

    // Start from the end and shift characters
    int j = newLength - 1;
    for(int i = length - 1; i >= 0; i--) {
        if(str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
    }
}

int main() {
    // Enough space to accommodate the transformation
    char str[100] = "my name is khan";
    int originalLength = 17; // actual length of the string (not including buffer)
    
    replaceSpaces(str, originalLength);
    cout << str;

    return 0;
}
