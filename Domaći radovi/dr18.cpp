#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;
int main(void)
{
    int n;
    cin >> n;
    cin.ignore(1, '\n');

    long long sum(0);

    char input[100 + 1];
    for(int i = 0; i < n; i++) {
        //cout << "PETLJA" << endl;
        cin.getline(input, 100 + 1);

        char newCStr[100 + 1] = "";
        int newCStrI = 0;
        for(int j = 0; j < strlen(input); j++)
            if(input[j] >= '0' and input[j] <= '9')
                newCStr[newCStrI++] = input[j];
        //cout << newCStr << endl;
        sum += atoll(newCStr);
    }

    cout << sum;
}
