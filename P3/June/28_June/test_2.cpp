#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin >> t;
    while(t--)
    {
        string str, str1;
        cin >> str;
        cin >> str1;
        int len = str.length();
        int len1 = str1.length();
        int count[26] = {};
        int count2[26] = {};
        for(int i = 0; i < len; i++)
        {
            count[str[i] - 'a']++;
            count2[str1[i]-'a']++;
        }
        int flag = 0;
        if(len == len1)
        {
            for(int i = 0; i < 26; i++)
            {
                if(count[i] != count2[i])
                {
                    flag= 1;
                }

            }
            if(flag==0)
                cout << "Yes" << endl;
        }
        else
        {
            cout << "No" <<endl;

        }
        if(flag == 1)
        {
            cout << "No" << endl;

        }

    }

    return 0;
}
