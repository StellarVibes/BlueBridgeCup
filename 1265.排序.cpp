#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size; // 读取向量的大小
    vector<int> v(size); // 创建一个指定大小的向量
    for (int i = 0; i < size; ++i)
    {
        cin >> v[i]; // 逐个读取向量元素
    }
    sort(v.begin(), v.end());

    for (const auto& e : v)
    {
        cout << e << " ";
    }
    cout << endl;
    for (int i = v.size() - 1; i >= 0; --i)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}