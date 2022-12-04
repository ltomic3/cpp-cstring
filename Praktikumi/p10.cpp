#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char rijec[100 + 1];
    int n;
    cin >> rijec >> n;

    int len = strlen(rijec);

    char nova[len + 1];
    char c;
    for(int i = 0; i < n; i++) {
        c = rijec[0];
        for(int j = 1; j < len; j++)
            rijec[j-1] = rijec[j];
        rijec[len - 1] = c;
    }

    cout << rijec;
    return 0;
}
