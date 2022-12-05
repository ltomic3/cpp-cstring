#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;
int main(void)
{
    char s[500 + 1];
    cin.getline(s, 500 + 1);

    int k;
    cin >> k;
    int br(0);

    char *pch;
    pch = strtok(s, " ");
    while(pch != NULL) {
        if(br < k) cout << pch << " ";
        else break;
        br++;
        pch = strtok(NULL, " ");
    }

    return 0;
}
