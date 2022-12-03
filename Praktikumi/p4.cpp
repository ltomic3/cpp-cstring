#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin.getline(input, 100 +1);

    char *pch;
    pch = strtok(input, " ");
    int i = 0;
    while(pch != NULL) {
        if(i == 1) {
            cout << " " << pch[0] << ". ";
            i++;
        }
        else {
            cout << pch;
            i++;
        }
        pch = strtok(NULL, " ");
    }
    return 0;
}
