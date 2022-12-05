#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char broj[100 + 1];
    cin >> broj;

    int jeZrcalan(1);

    if(strcmp(broj, "0") == 0) {
        cout << "DA";
        return 0;
    }
    else if(broj[strlen(broj)-1] == '0')
        jeZrcalan = 0;
    else
        for(int i = 0; i < strlen(broj); i++)
            if(broj[i] != '0' and broj[i] != '8') {
                jeZrcalan = 0;
                break;
            }

    if(jeZrcalan) cout << "DA";
    else cout << "NE";
    return 0;
}
