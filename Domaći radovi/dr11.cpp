#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;
int main(void)
{
    char broj[5 + 1];
    cin >> broj;

    sort(broj, broj + 5);

    int br(0);
    int rj(0);
    for(int i = 0; i < 5; i += br) {
        br = count(broj, broj + 5, broj[i]);
        rj++;
    }

    cout << rj;

    return 0;
}
