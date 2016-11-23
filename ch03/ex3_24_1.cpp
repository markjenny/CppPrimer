/*************************************************************************
	> File Name: ex3_24_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月24日 星期四 00时03分54秒
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> vec;
    int temp_num;
    while (cin >> temp_num)
        vec.push_back(temp_num);

    for (auto iter = vec.cbegin(); iter != vec.cend() - 1; iter++)
    {
        cout << *iter + *(iter + 1) << " ";
    }
    cout << endl;

    for (auto iter_begin = vec.cbegin(), iter_end = vec.cend() - 1; iter_begin <= iter_end; iter_begin++,iter_end--)
    {
        cout << *iter_begin + *iter_end << " ";
    }
    cout << endl;

    return 0;
}
