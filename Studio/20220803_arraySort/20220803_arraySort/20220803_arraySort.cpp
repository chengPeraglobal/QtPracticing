// 20220803_arraySort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void inputArray(int array[], int n);
void sortArray(int array[], int n);
void outputArray(int array[], int n);

void intputCharArray(char charArray[], int charN);
int lenCharArray(char charArray[]);

int main()
{
    int array[5] = {0};
    int n = sizeof(array) / sizeof(array[0]);
    //inputArray(array, n);
    //sortArray(array, n);
    //outputArray(array, n);

    char charArray[128] = "";
    int charN = sizeof(charArray);
    intputCharArray(charArray,charN);
    cout << "字符串的长度为：" << lenCharArray(charArray) << endl;
}

void inputArray(int array[], int n)
{
    cout << "请输入" << n << "个int值：" << endl;
    int i = 0;
    for (i=0;i<n;i++)
    {
        cin >> array[i];
    }
}

void sortArray(int array[], int n)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            //冒泡法排序，数值从小到大排列
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void outputArray(int array[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << array[i]<<"  ";
    }
}

void intputCharArray(char charArray[], int charN)
{
    cout << "请输入一个字符串：" << endl;
    cin.getline(charArray, charN);
}

int lenCharArray(char charArray[])
{
    int i = 0;
    while (charArray[i] != '\0')
    {
        i++;
    }
    return i;
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
