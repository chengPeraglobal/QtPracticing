// 20220628_Char.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void test01()
{
    cout << "Hello World!\n";
}

void test02()
{
    // 输出ASCII码, ‘0’:48，'A'：65，'a'：97
    cout << (int)'a' << endl;
    cout << int('a') << endl;
}

void test03()
{
    char b;
    b = 120;
    cout << b << endl;  //输出'x'
    cout << int(b) << endl;  //输出120
}

void test04()
{
    char c = '\0';
    cout << "请输入一个字符：" << endl;
    cin >> c;
    cout << "获得的字符是：" << c << endl;
}

void test05()
{
    char ch = '\0';
    cout << "请输入一个字母：" << endl;
    cin >> ch;
    while (ch)
    {
        if ((ch < 'A') || ((ch > 'Z') && (ch < 'a')) || (ch > 'z'))
        {
            cout << "请输入一个字母：" << endl;
            cin >> ch;
        }
        else
            break;
    }

    cout << "获得的字符是：" << ch << endl;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        cout << ch <<"：大写" << endl;
        ch = ch + ('a' - 'A');
        cout << "改小写后为："<< ch << endl;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    { 
        cout << ch << "：小写" << endl;
        ch = ch - ('a' - 'A');
        cout << "改大写后为：" << ch << endl;
    }
}

int main(int argc, char *argv[])
{
    test05();
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
