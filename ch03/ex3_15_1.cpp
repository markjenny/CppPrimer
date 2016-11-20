/*************************************************************************
	> File Name: ex3_15_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月20日 星期日 14时23分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<string> str_vec;
    string line;
    while (cin >> line)
        str_vec.push_back(line);

    vector<string>::iterator iter = str_vec.begin();
    for(; iter != str_vec.end(); iter++)
        cout << *iter << endl;

    return 0;
}
