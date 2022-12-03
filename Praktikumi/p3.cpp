#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin >> input;

    for(int i = 0; i < strlen(input); i++) {
        if(tolower(input[i]) >= 'x' && input[i] <= 'z')
            input[i] = input[i] - 26 + 3;
        else
            input[i] = input[i] + 3;
    }

    cout << input;
    return 0;
}
