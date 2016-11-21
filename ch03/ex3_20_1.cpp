/*************************************************************************
	> File Name: ex3_20_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月20日 星期日 18时25分15秒
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    int temp_int;
    while (cin >> temp_int)
    {
        vec.push_back(temp_int);
    }

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter + *(iter+1) << endl;
    }
    return 0;
}
