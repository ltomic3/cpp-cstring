#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char input[100 + 1];
    cin.getline(input, 100 + 1);

    char uzlazno[] = "1 2 3 4 5 6 7 8";
    char silazno[] = "8 7 6 5 4 3 2 1";

    if(strcmp(input, uzlazno) == 0) cout << "uzlazno";
    else if(strcmp(input, silazno) == 0) cout << "silazno";
    else cout << "razlozeno";

    return 0;
}
