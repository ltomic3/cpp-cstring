#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char recenica[100 + 1];
    cin.getline(recenica, 100 + 1);

    char samoglasnici[5 + 1] = "aeiou";

    for(int i = 0; recenica[i] != '\0'; i++) {
        for(int j = 0; j < 5; j++) {
            if(recenica[i] == samoglasnici[j]) {
                recenica[i+1] = '_';
                recenica[i+2] = '_';
                break;
            }
        }
    }

    char *pch;
    pch = strtok(recenica, "_");
    while(pch != NULL) {
        cout << pch;
        pch = strtok(NULL, "_");
    }

    return 0;
}
