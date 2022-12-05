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

    int jePalindrom;

    char *pch;
    pch = strtok(recenica, " ");
    while(pch != NULL) {

        jePalindrom = 1;
        for(int i = 0; i < strlen(pch) / 2; i++)
            if(tolower(pch[i]) != tolower(pch[strlen(pch) - 1 - i])) {
                jePalindrom = 0;
                break;
            }

        if(jePalindrom) cout << pch << endl;

        pch = strtok(NULL, " ");
    }
    return 0;
}
