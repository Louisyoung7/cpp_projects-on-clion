// ʵ���ַ��������ÿ⺯���Ĺ��ܣ����£�
// int isalpha(int ch);   	// ��ch����ĸ��'A'-'Z','a'-'z'�����ط�0�����򷵻�0��
// int isalnum(int ch);		// ��ch����ĸ��'A'-'Z','a'-'z'�������֣�'0'-'9'�������ط�0�����򷵻�0��
// int isdigit(int ch);   	// ��ch�����֣�'0'-'9'�����ط�0�����򷵻�0��
// int islower(int ch);   	// ��ch��Сд��ĸ��'a'-'z'�����ط�0�����򷵻�0��
// int isupper(int ch);   	// ��ch�Ǵ�д��ĸ��'A'-'Z'�����ط�0�����򷵻�0��
// int tolower(int ch);   	// ��ch�Ǵ�д��ĸ��'A'-'Z'�����򷵻�����Сд��ĸ��'a'-'z'����
// int toupper(int ch);   	// ��ch��Сд��ĸ��'a'-'z'�����򷵻����Ĵ�д��ĸ��'A'-'Z'����

//ASCII��ֵ��A 65 a 97

#include "iostream"
using namespace std;

int isalpha(int ch);
int isalnum(int ch);
int isdigit(int ch);
int islower(int ch);
int isupper(int ch);
int tolower(int ch);
int toupper(int ch);



int main() {

    char ch =0;
    cout << "�������ַ���" << endl;
    cin >> ch;
    char re_ch = toupper(ch);
    cout << re_ch << endl;
    return 0;
}
int isalpha(int ch) {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        return 1;
    }
    else return 0;
}
int isalnum(int ch) {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9') {
        return 1;
    }
    else return 0;
}
int isdigit(int ch) {
    if (ch >= '0' && ch <= '9') {
        return 1;
    }
    else return 0;
}
int islower(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }
    else return 0;
}
int isupper(int ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    else return 0;
}
int tolower(int ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    else return 0;
}
int toupper(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    else return 0;
}