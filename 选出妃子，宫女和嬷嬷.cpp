#include <iostream>
using namespace std;

struct st_girl {//超女结构体
    int age;
    int height;
    string sc;//身材
    bool yz;//颜值
}stgirl;

void func(const st_girl &stgirl);

int main()
{
    //妃子:1)年龄18-25岁;2)身高165-178cm;3)身材火辣;4)颜值漂亮。
    //宫女:1)年龄18-30岁;2)身高160-165cm;3)身材火辣或者普通;4)颜值漂亮。
    //嬷嬷:1)年龄35-40岁;2)身高155-165cm;3)身材普通或者飞机场;4颜值一般。
    cout << "请输入年龄：" << endl;
    cin >> stgirl.age;
    cout <<"请输入身高：" << endl;
    cin >> stgirl.height;
    cout << "请输入身材：" << endl;
    cin >> stgirl.sc;
    cout << "请输入颜值：" << endl;
    cin >> stgirl.yz;
    stgirl = {stgirl.age,stgirl.height,stgirl.sc,stgirl.yz};
    st_girl & ststgirl = stgirl;
    func(ststgirl);
    return 0;
}

void func(const st_girl &stgirl) {
    int age = stgirl.age;
    int height = stgirl.height;
    string sc = stgirl.sc;
    bool yz = stgirl.yz;
    if (age >= 18 && age <= 25 && height >= 165 && height <= 178 && sc == "火辣" && yz == true) {
        cout << "妃子" << endl;
    }
    else if (age >= 18 && age <= 30 && height >= 160 && height <= 165 && (sc == "火辣" || sc == "普通") && yz == true) {
        cout << "宫女" << endl;
    }
    else if (age >= 35 && age <= 40 && height >= 155 && height <= 165 && (sc == "普通" || sc == "飞机场") && yz == false) {
        cout << "嬷嬷" << endl;
    }
}