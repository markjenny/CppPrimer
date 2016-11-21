/*************************************************************************
	> File Name: ex3_17_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月20日 星期日 16时58分57秒
 ************************************************************************/

#include<iostream>
#include<cctype>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> str_vec;
    string temp_str;

    while (cin >> temp_str)
    {
        for (auto &c : temp_str)
            c = toupper(c);
        cout << temp_str << endl;
    }
    return 0;
}


