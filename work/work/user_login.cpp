#include "work.h"
using namespace std;
void user_login()
{
    string name,pass;
    int c,flag=0;
    cout<<"请输入用户名：";
    cin>>name;
    cout<<"请输入密码";
    cin>>pass;
    FILE *F=fopen("user_data.txt","r");
    while(flag==0)
    {
        for(int i=0;i<signnum;i++)
        {
            if(user[i].name==name && user[i].pwd==pass)
            {
                cout<<"******登陆成功！******"<<endl;
                printf("\n");
                //user_func();
                user_index=i;
                flag=1;
                break;
            }
            else
            flag=0;
        }
        if(flag==1)
        {
            user_main_menu();
        }
        if(flag==0)
        {
            cout<<"*****登陆失败，请重新输入账号密码,或退出******"<<endl;
            cout<<"1.退出     2.继续"<<endl;
            cin>>c;
            if(c==1)
            return;//返回主菜单
            if(c==2)
            {
                cout<<"请输入用户名:";
                cin>>name;
                cout<<"请输入密码:";
                cin>>pass;

            }
        }

    }

}
