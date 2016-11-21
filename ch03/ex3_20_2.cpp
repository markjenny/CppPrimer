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
    
    decltype(vec.size()) half_vec_size = vec.size() / 2;
    decltype(vec.size()) vec_size = vec.size();
    decltype(vec.size()) is_odd = vec.size() % 2;
    for (decltype(vec.size()) i = 0; i < half_vec_size; i++)
    {
        cout << vec[i] + vec[vec_size - 1 - i] << " ";
    }
    if (is_odd == 1)
    {
        cout << vec[half_vec_size];
    }
    cout << endl;
    return 0;
}
