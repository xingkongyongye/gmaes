#include "work.h"
void change_messgae()
{
    string name;
    string number;
    string site;
    int choice;
    int flag;
    cout<<"请选择修改的属性(1.用户名   2.联系方式  3.地址):";
    cin>>choice;
    if(choice==1)
    {
        cout<<"请输入修改后的用户名：";
label_6:

        cin>>name;
        for(int i=0;i<signnum;i++)
        {
            if(user[i].name==name)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"该用户名已存在，请重新输入：";
            goto label_6;
        }
        if(flag==0)
        {
            user[user_index].name=name;
            cout<<"修改成功"<<endl;
        }

    }
    if(choice==2)
    {
        cout<<"请输入修改后的联系方式：";
        cin>>number;
        user[user_index].number=number;
        cout<<"修改成功"<<endl;
    }
    if(choice==3)
    {
        cout<<"请输入修改后的联系方式：";
        cin>>site;
        user[user_index].site=site;
        cout<<"修改成功"<<endl;
    }


}
