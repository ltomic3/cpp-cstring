#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin.getline(input, 100 + 1);

    for(size_t i = 0; i < strlen(input); i++) {
        char c = toupper(input[i]);
        if(c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c >= 65 && c <= 65 + 26)
            cout << i+1 << " ";
    }
    return 0;
}
