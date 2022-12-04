#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
    char rijec[100 + 1];
    cin >> rijec;

    char samoglasnici[5 + 1] = "aeiou";

    int br(0);
    int i(0);
    int flag(0);
    while(rijec[i] != '\0') {
        rijec[i] = tolower(rijec[i]);

        for(int j = 0; j < 5; j++)
        if(rijec[i] == samoglasnici[j]) {
            br++;
            break;
        }

        if(rijec[i] == 'r'
           and i != 0
           and rijec[i+1] != '\0')
           {
               flag = 0;
               for(int j = 0; j < 5; j++)
               {
                   if(rijec[i-1] == samoglasnici[j]){
                        flag = 1;
                        break;
                   }
                   if(rijec[i+1] == samoglasnici[j]) {
                        flag = 1;
                        break;
                   }
               }

               if(flag == 0) br++;
           }

        i++;
    }

    cout << br;
    return 0;
}
