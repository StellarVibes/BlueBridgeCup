#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int max = 0;
    char ret;
    cin >> s;
    int arr[26] = {0};
    for (auto &e : s)
    {
        arr[e - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            ret = i + 'a';
        }
    }
    cout << ret << endl << max;

    return 0;
}