#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(void)
{
    int n;
    cin >> n;

    int brM(0);
    int brZ(0);
    char ime[100 + 1];
    for(int i = 0; i < n; i++) {
        cin >> ime;
        if(ime[strlen(ime)-1] == 'a') brZ++;
        else brM++;
    }

    if(brZ < brM) cout << brZ;
    else cout << brM;
    return 0;
}
