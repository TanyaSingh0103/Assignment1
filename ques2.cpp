#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s;
    return 0;
}
