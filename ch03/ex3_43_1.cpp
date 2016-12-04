/*************************************************************************
	> File Name: ex3_43_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年12月04日 星期日 17时10分22秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef int int_array[4];

int main()
{
    int ia[3][4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    //ver1
    for (int_array & p : ia)
        for (int  l2 : p)
            cout << l2 << endl;

    //ver2
    for (int (*p)[4]  = ia; p != ia + 3; p++)
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << endl;

    //ver3
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << ia[i][j] << endl;

    return 0;
}
