#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    // NAPOMENA: ukupan broj bodova na VPL-u
    // 80 / 100 jer je jedno rješenje za 1
    // manje, a ne znam zašto

    char rijec[100 + 1];
    cin >> rijec;

    int br(0);
    int d = strlen(rijec);
    char temp;

    for(int i = 0; i < d - 1; i++)
        for(int j = 0; j < d - 1 - i; j++)
        if(rijec[j + 1] < rijec[j]) {
            temp = rijec[j];
            rijec[j] = rijec[j + 1];
            rijec[j + 1] = temp;
            br++;
        }

    cout << rijec << endl << br;
    return 0;
}
