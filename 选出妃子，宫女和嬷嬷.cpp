#include <iostream>
#include <string.h>
using namespace std;

struct st_girl {//��Ů�ṹ��
    int age;
    int height;
    char sc[100];//���
    bool yz;//��ֵ
}stgirl;

void func(const st_girl &stgirl);

int main()
{
    //����:1)����18-25��;2)���165-178cm;3)��Ļ���;4)��ֵƯ����
    //��Ů:1)����18-30��;2)���160-165cm;3)��Ļ���������ͨ;4)��ֵƯ����
    //����:1)����35-40��;2)���155-165cm;3)�����ͨ���߷ɻ���;4��ֵһ�㡣
    cout << "���������䣺" << endl;
    cin >> stgirl.age;
    cout <<"��������ߣ�" << endl;
    cin >> stgirl.height;
    cout << "��������ģ�" << endl;
    cin >> stgirl.sc;
    cout << "��������ֵ��" << endl;
    cin >> stgirl.yz;
    st_girl & ststgirl = stgirl;
    func(ststgirl);
    return 0;
}

void func(const st_girl &stgirl) {
    int age = stgirl.age;
    int height = stgirl.height;
    //string sc = stgirl.sc;
    bool yz = stgirl.yz;
    if (age >= 18 && age <= 25 && height >= 165 && height <= 178 && (strcmp(stgirl.sc,"����") == 0) && yz == true) {
        cout << "����" << endl;
    }
    else if (age >= 18 && age <= 30 && height >= 160 && height <= 165 && ((strcmp(stgirl.sc,"����") == 0) || (strcmp(stgirl.sc,"��ͨ") == 0)) && yz == true) {
        cout << "��Ů" << endl;
    }
    else if (age >= 35 && age <= 40 && height >= 155 && height <= 165 && ((strcmp(stgirl.sc,"��ͨ") == 0) || (strcmp(stgirl.sc,"�ɻ���") == 0)) && yz == false) {
        cout << "����" << endl;
    }
}