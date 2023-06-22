#include "work.h"
using namespace std;
void admin_sign()
{
    string name,pass;
    cout<<"请输入管理员姓名：";
    cin>>name;
    cout<<"请输入密码：";
    cin>>pass;
    if(name=="admin" && pass=="1433223")
    {
        cout<<"****** 登陆成功！ ******"<<endl;
        admin_func();
    }

    else
        cout<<"****** 登陆失败，即将返回主菜单... ******"<<endl;
}
