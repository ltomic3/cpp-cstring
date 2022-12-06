#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin.getline(input, 100 + 1);

    int rezultat = 0;
    int mnozenje = 1;
    for(int i = strlen(input) - 1; i >= 0; i--) {
        if(input[i] >= 'A' && input[i] <= 'F')
            rezultat += (input[i] - 'A' + 10) * mnozenje;
        else
            rezultat += (input[i] - '0') * mnozenje;
        mnozenje *= 16;
    }

    cout << rezultat;
    return 0;
}
