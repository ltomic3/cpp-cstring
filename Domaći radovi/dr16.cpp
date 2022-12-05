#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char str[100 + 1];
    cin.getline(str, 100 + 1);

    vector<int> ind;
    int input;
    for(int i = 0; i < strlen(str); i++) {
        cin >> input;
        ind.push_back(input);
    }

    vector<int> sorted(ind);
    sort(sorted.begin(), sorted.end());

    for(int i = 0; i < sorted.size(); i++) {
        int it = find(ind.begin(), ind.end(), sorted.at(i)) - ind.begin();
        cout << str[it];
    }

    return 0;
}

