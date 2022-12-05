#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;
int main(void)
{
    int n, k;
    cin >> n >> k;
    cin.ignore(1000, '\n');

    int brK(0);
    int suma(0);

    char ulaz[100 + 1];
    char slovo;
    for(int i = 0; i < n; i++) {
        cin.getline(ulaz, 100 + 1);
        char broj[100 + 1] = "";
        for(int j = 0; ulaz[j] != ' '; j++)
            broj[j] = ulaz[j];
        slovo = ulaz[strlen(ulaz)-1];

        if(brK < k) suma += atoi(broj);
        if(slovo == 'K') brK++;
    }
    cout << suma;
    return 0;
}
