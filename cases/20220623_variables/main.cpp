#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //������Ĳ����룬����"����-ѡ��-�ı��༭��-��Ϊ-system"���½����̲���Ч
    cout << "��ã����磡" << endl;

    int a = 10;
    cout << a <<endl;

    //Ĭ�����ʮ���ƽ����������������ƣ�Ӧ��ͷ�ļ�bitset
    cout << 0b0110 << endl;
    cout << bitset<8>(0b0110) << endl;

    //�˽���ǰ׺Ϊ0��ʮ������ǰ׺Ϊ0x�����汾Qt�������д��oct��hex
    cout << (0123) <<endl;
    cout << 0x123 <<endl;

    //����������ռ�ռ��С���ֽ���
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
