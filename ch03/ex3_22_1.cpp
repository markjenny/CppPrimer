/*************************************************************************
	> File Name: ex3_22_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月23日 星期三 00时58分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    string input_str;
    vector<string> str_vec;
    while (getline(cin, input_str))
        str_vec.push_back(input_str);

    for (auto str_iter = str_vec.begin(); 
         str_iter != str_vec.end() && !str_iter->empty(); str_iter++)
    {
        for (auto &c : *str_iter)
            c = toupper(c);
        cout << *str_iter << endl;
    }
    return 0;
}
