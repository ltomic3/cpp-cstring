#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char zip[100 + 1];
    cin >> zip;

    int br = 0;
    for(int i = 0; i < strlen(zip); i += br+1) {
        char c = zip[i];
        int n = 0;
        br = 0;
        for(int j = i+1; zip[j] >= '0' and zip[j] <= '9'; j++) {
            n = n * 10 + zip[j] - '0';
            br++;
        }
        for(int k = 0; k < n; k++) cout << zip[i];
    }
    return 0;
}
