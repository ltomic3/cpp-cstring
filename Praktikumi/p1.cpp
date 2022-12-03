#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin >> input;

    char *pch;
    pch = strtok(input, "-");
    while(pch != NULL)
    {
        cout << (char)toupper(pch[0]);
        pch = strtok(NULL, "-");
    }
    return 0;
}
