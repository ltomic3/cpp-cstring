#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    char rijec1[100 + 1];
    char rijec2[100 + 1];

    cin.getline(rijec1, 100 + 1);
    cin.getline(rijec2, 100 + 1);

    int d1 = strlen(rijec1);
    int d2 = strlen(rijec2);

    if(d1 == d2) {
        for(int i = 0; i < d1; i++) {
            if(rijec1[i] + rijec2[i] > 255)
                cout << (char)((rijec1[i] + rijec2[i]) % 255);
            else
                cout << (char)(rijec1[i] + rijec2[i]);
        }
    }
    else if(d1 > d2) {
        for(int i = 0; i < d1; i++) {
            if(i + 1 > d2) rijec2[i] = ' ';
            if(rijec1[i] + rijec2[i] > 255)
                cout << (char)((rijec1[i] + rijec2[i]) % 255);
            else
                cout << (char)(rijec1[i] + rijec2[i]);
        }
    }
    else {
        for(int i = 0; i < d2; i++) {
            if(i + 1 > d1) rijec1[i] = ' ';
            if(rijec1[i] + rijec2[i] > 255)
                cout << (char)((rijec1[i] + rijec2[i]) % 255);
            else
                cout << (char)(rijec1[i] + rijec2[i]);
        }
    }

    return 0;
}
