#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //输出中文不乱码，设置"工具-选项-文本编辑器-行为-system"，新建工程才生效
    cout << "你好，世界！" << endl;

    int a = 10;
    cout << a <<endl;

    //默认输出十进制结果，若需输出二进制，应加头文件bitset
    cout << 0b0110 << endl;
    cout << bitset<8>(0b0110) << endl;

    //八进制前缀为0，十六进制前缀为0x，本版本Qt无需可以写明oct或hex
    cout << (0123) <<endl;
    cout << 0x123 <<endl;

    //各数据类型占空间大小，字节数
    cout << sizeof (a) << endl;
    cout << sizeof (short(10)) << endl;
    cout << sizeof (long(10)) << endl;

    cout << sizeof(10.0) << endl;
    cout << sizeof (float(10.0)) << endl;
    cout << sizeof (double(10.0)) << endl;

    cout << sizeof (char('a')) << endl;
    char gretting[] = "hello";
    cout << sizeof (gretting) << endl;

    return 0;
}
