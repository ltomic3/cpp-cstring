#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;
int main(void)
{
    char recenica[80 + 1];
    char s;
    int n;

    cin.getline(recenica, 80 + 1);
    cin >> s;
    cin >> n;

    int br;
    char *pch;
    pch = strtok(recenica, " ");
    while(pch != NULL) {
        br = 0;
        for(int i = 0; i < strlen(pch); i++)
            if(pch[i] == s) br++;

        if(br == n) cout << pch << endl;

        pch = strtok(NULL, " ");
    }

    return 0;
}
