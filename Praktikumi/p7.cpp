#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char num1[3 + 1] = "365";
    char num2[3 + 1] = "666";
    char input1[3 + 1];
    char input2[3 + 1];

    cin >> input1 >> input2;

    int br(0);
    for(int i = 0; i < 3; i++) {
        if(num1[i] != input1[i]) br++;
        if(num2[i] != input2[i]) br++;
    }

    cout << br;
    return 0;
}
