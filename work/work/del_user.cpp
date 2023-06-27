#include "work.h"
void del_user()
{
    char a[100];
    char choice;
    int id;
    cout<<"请输入删除用户的ID：";
    cin>>a;
    if(a[strlen(a)-2]=='0')
        id=atoi(a+strlen(a)-1);
    else
        id=atoi(a+strlen(a)-2);
    for(int i=0;i<signnum;i++)
    {
        if(user[i].id==id&&user[i].ing==0)
        cout<<"该用户已被删除"<<endl;
        if(user[i].id==id&&user[i].ing==1)
        {
            cout<<"确定要删除该用户吗？(y/n)"<<endl;
            cout<<"*****************************************"<<endl;
            printf("用户ID：U%05d\n用户名：%s\n联系方式：%s\n",user[i].id,user[i].name.c_str(),user[i].number.c_str());
            cout<<"*****************************************"<<endl;
            cin>>choice;
            if(choice=='y')
            {
                user[i].ing=0;
                for(int i=0;i<goods_num;i++)
                {
                    if(product[i].sell_id==id&&product[i].ing=="销售中")
                    {
                        product[i].ing="已被管理员下架";
                    }
                }
                cout<<"删除成功"<<endl;
            }
            else{goto label_20;}
        }

    }
    if(id==999999)
    {
label_20:
        cout<<"删除失败"<<endl;
        return;
    }
}
